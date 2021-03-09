#pragma once

#include "ui/layers/generic_box.h"

namespace Ton {
struct FtabiKey;
enum class KeyType;
}  // namespace Ton

namespace Wallet {

enum class KeystoreAction {
  Export,
  ChangePassword,
  Delete,
};

using OnKeystoreAction = Fn<void(Ton::KeyType, const QByteArray &, KeystoreAction)>;

struct NewFtabiKey {
  QString name;
  bool generate;
  std::vector<QString> words;
};

void KeystoreBox(not_null<Ui::GenericBox *> box, const QByteArray &mainPublicKey,
                 const std::vector<Ton::FtabiKey> &ftabiKeys, const Fn<void(QString)> &share,
                 const OnKeystoreAction &onAction, const Fn<void()> &createFtabiKey);

void NewFtabiKeyBox(not_null<Ui::GenericBox *> box, const Fn<void(NewFtabiKey)> &done);

}  // namespace Wallet
