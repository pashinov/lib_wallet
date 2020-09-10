#pragma once

#include "ui/rp_widget.h"
#include "ui/inline_token_icon.h"
#include "ui/click_handler.h"
#include "ui/widgets/buttons.h"

class Painter;

namespace Ton {
struct WalletViewerState;
} // namespace Ton

namespace Wallet {

struct TokenItem {
	Ui::TokenIconKind icon = Ui::TokenIconKind::Ton;
	QString name = "";
	QString address = "";
	uint64_t balance = 0;
};

bool operator==(const TokenItem &a, const TokenItem &b);
bool operator!=(const TokenItem &a, const TokenItem &b);

struct TokensListState {
	std::vector<TokenItem> tokens;
};

class TokensListRow;

class TokensList final {
public:
	TokensList(not_null<Ui::RpWidget*> parent, rpl::producer<TokensListState> state);
	~TokensList();

	void setGeometry(QRect geometry);

	[[nodiscard]] rpl::producer<TokenItem> openRequests() const;

	[[nodiscard]] rpl::lifetime &lifetime();

private:
	void setupHeader();
	void setupBody(rpl::producer<TokensListState> &&state);
	void refreshItems();
	bool mergeListChanged(std::vector<TokenItem> &&data);

	[[nodiscard]] std::unique_ptr<TokensListRow> makeRow(const TokenItem &data);

	Ui::RpWidget _widget;

	std::vector<TokenItem> _listData{};

	std::vector<std::unique_ptr<TokensListRow>> _rows;
	std::vector<std::unique_ptr<Ui::RoundButton>> _buttons;

	rpl::event_stream<TokenItem> _openRequests;
};

[[nodiscard]] rpl::producer<TokensListState> MakeTokensListState(
	rpl::producer<Ton::WalletViewerState> state);

} // namespace Wallet
