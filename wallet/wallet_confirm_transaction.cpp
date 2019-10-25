// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//
#include "wallet/wallet_confirm_transaction.h"

#include "wallet/wallet_common.h"
#include "wallet/wallet_phrases.h"
#include "wallet/wallet_send_grams.h"
#include "ui/address_label.h"
#include "ui/widgets/labels.h"
#include "ui/widgets/buttons.h"
#include "ui/text/text_utilities.h"
#include "styles/style_layers.h"
#include "styles/style_wallet.h"
#include "styles/palette.h"

#include <QtGui/QtEvents>

namespace Wallet {

void ConfirmTransactionBox(
		not_null<Ui::GenericBox*> box,
		const PreparedInvoice &invoice,
		int64 fee,
		Fn<void()> confirmed) {
	box->setTitle(ph::lng_wallet_confirm_title());

	box->addTopButton(st::boxTitleClose, [=] { box->closeBox(); });
	box->setCloseByOutsideClick(false);

	const auto amount = ParseAmount(invoice.amount).full;
	auto text = rpl::combine(
		ph::lng_wallet_confirm_text(),
		ph::lng_wallet_grams_count(amount)()
	) | rpl::map([=](QString &&text, const QString &grams) {
		return Ui::Text::RichLangValue(text.replace("{grams}", grams));
	});
	box->addRow(
		object_ptr<Ui::FlatLabel>(
			box,
			std::move(text),
			st::walletLabel),
		st::walletConfirmationLabelPadding);

	box->addRow(
		object_ptr<Ui::RpWidget>::fromRaw(Ui::CreateAddressLabel(
			box,
			invoice.address,
			st::walletConfirmationAddressLabel,
			st::windowBgOver->c)),
		st::walletConfirmationAddressPadding);

	const auto feeParsed = ParseAmount(fee).full;
	auto feeText = rpl::combine(
		ph::lng_wallet_confirm_fee(),
		ph::lng_wallet_grams_count(feeParsed)()
	) | rpl::map([=](QString &&text, const QString &grams) {
		return text.replace("{grams}", grams);
	});
	const auto feeWrap = box->addRow(object_ptr<Ui::FixedHeightWidget>(
		box,
		(st::walletConfirmationFee.style.font->height
			+ st::walletConfirmationSkip)));
	const auto feeLabel = Ui::CreateChild<Ui::FlatLabel>(
		feeWrap,
		std::move(feeText),
		st::walletConfirmationFee);
	rpl::combine(
		feeLabel->widthValue(),
		feeWrap->widthValue()
	) | rpl::start_with_next([=](int innerWidth, int outerWidth) {
		feeLabel->moveToLeft(
			(outerWidth - innerWidth) / 2,
			0,
			outerWidth);
	}, feeLabel->lifetime());

	box->events(
	) | rpl::start_with_next([=](not_null<QEvent*> e) {
		if (e->type() == QEvent::KeyPress) {
			const auto key = static_cast<QKeyEvent*>(e.get())->key();
			if (key == Qt::Key_Enter || key == Qt::Key_Return) {
				confirmed();
			}
		}
	}, box->lifetime());

	box->addButton(ph::lng_wallet_confirm_send(), confirmed);
	box->addButton(ph::lng_wallet_cancel(), [=] { box->closeBox(); });
}

} // namespace Wallet
