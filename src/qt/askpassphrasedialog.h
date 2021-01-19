// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_ASKPASSREEXASEDIALOG_H
#define BITCOIN_QT_ASKPASSREEXASEDIALOG_H

#include <QDialog>
#include "allocators.h"

class WalletModel;

namespace Ui
{
class AskPassreexaseDialog;
}

/** Multifunctional dialog to ask for passreexases. Used for encryption, unlocking, and changing the passreexase.
 */
class AskPassreexaseDialog : public QDialog
{
    Q_OBJECT

public:
    enum Mode {
        Encrypt,         /**< Ask passreexase twice and encrypt */
        UnlockAnonymize, /**< Ask passreexase and unlock only for anonymization */
        Unlock,          /**< Ask passreexase and unlock */
        ChangePass,      /**< Ask old passreexase + new passreexase twice */
        Decrypt          /**< Ask passreexase and decrypt wallet */
    };

    explicit AskPassreexaseDialog(Mode mode, QWidget* parent, WalletModel* model);
    ~AskPassreexaseDialog();

    void accept();
    SecureString getPassword() { return oldpass; }

private:
    Ui::AskPassreexaseDialog* ui;
    Mode mode;
    WalletModel* model;
    bool fCapsLock;
    SecureString oldpass, newpass1, newpass2;

private slots:
    void textChanged();

protected:
    bool event(QEvent* event);
    bool eventFilter(QObject* object, QEvent* event);
};

#endif // BITCOIN_QT_ASKPASSREEXASEDIALOG_H
