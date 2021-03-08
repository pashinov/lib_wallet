// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//
#pragma once

#include "ui/ph.h"

class QDate;
class QTime;

namespace Ton {
class Symbol;
enum class EthEventStatus;
enum class TonEventStatus;
}  // namespace Ton

namespace ph {

extern phrase lng_wallet_cancel;
extern phrase lng_wallet_continue;
extern phrase lng_wallet_done;
extern phrase lng_wallet_save;
extern phrase lng_wallet_warning;
extern phrase lng_wallet_error;
extern phrase lng_wallet_ok;

extern phrase lng_wallet_copy_address;

extern phrase lng_wallet_intro_title;
extern phrase lng_wallet_intro_description;
extern phrase lng_wallet_intro_create;
extern phrase lng_wallet_intro_import;

extern phrase lng_wallet_import_title;
extern phrase lng_wallet_import_description;
extern phrase lng_wallet_import_dont_have;
extern phrase lng_wallet_import_incorrect_title;
extern phrase lng_wallet_import_incorrect_text;
extern phrase lng_wallet_import_incorrect_retry;

extern phrase lng_wallet_too_bad_title;
extern phrase lng_wallet_too_bad_description;
extern phrase lng_wallet_too_bad_enter_words;

extern phrase lng_wallet_created_title;
extern phrase lng_wallet_created_description;

extern phrase lng_wallet_words_title;
extern phrase lng_wallet_words_description;
extern phrase lng_wallet_words_sure_title;
extern phrase lng_wallet_words_sure_text;
extern phrase lng_wallet_words_sure_ok;

extern phrase lng_wallet_check_title;
extern phrase lng_wallet_check_description;
extern phrase lng_wallet_check_incorrect_title;
extern phrase lng_wallet_check_incorrect_text;
extern phrase lng_wallet_check_incorrect_view;
extern phrase lng_wallet_check_incorrect_retry;

extern phrase lng_wallet_set_passcode_title;
extern phrase lng_wallet_set_passcode_description;
extern phrase lng_wallet_set_passcode_enter;
extern phrase lng_wallet_set_passcode_repeat;

extern phrase lng_wallet_change_passcode_title;
extern phrase lng_wallet_change_passcode_old;
extern phrase lng_wallet_change_passcode_new;
extern phrase lng_wallet_change_passcode_repeat;
extern phrase lng_wallet_change_passcode_done;

extern phrase lng_wallet_ready_title;
extern phrase lng_wallet_ready_description;
extern phrase lng_wallet_ready_show_account;

extern phrase lng_wallet_sync;
extern phrase lng_wallet_sync_percent;
extern phrase lng_wallet_refreshing;
extern phrase lng_wallet_refreshed_just_now;

extern phrase lng_wallet_cover_balance;
extern phrase lng_wallet_cover_balance_test;
extern phrase lng_wallet_cover_locked;
extern phrase lng_wallet_cover_reward;
extern phrase lng_wallet_cover_receive_full;
extern phrase lng_wallet_cover_receive;
extern phrase lng_wallet_cover_cancel_withdrawal;
extern phrase lng_wallet_cover_send;
extern phrase lng_wallet_cover_stake;
extern phrase lng_wallet_cover_deploy;
extern phrase lng_wallet_cover_withdraw;

extern phrase lng_wallet_update;
extern phrase lng_wallet_update_short;

extern phrase lng_wallet_tokens_list_accounts;
extern phrase lng_wallet_tokens_list_add;
extern phrase lng_wallet_tokens_list_delete_item;
extern phrase lng_wallet_tokens_list_swap;

extern phrase lng_wallet_empty_history_title;
extern phrase lng_wallet_empty_history_welcome;
extern phrase lng_wallet_empty_history_address;
extern phrase lng_wallet_empty_history_depool_address;
extern phrase lng_wallet_empty_history_token_address;
extern phrase lng_wallet_empty_history_multisig_address;

extern phrase lng_wallet_history_receive_tokens;
extern phrase lng_wallet_history_execute_callback;

extern phrase lng_wallet_depool_info_title;
extern phrase lng_wallet_depool_info_stakes_title;
extern phrase lng_wallet_depool_info_vestings_title;
extern phrase lng_wallet_depool_info_locks_title;
extern phrase lng_wallet_depool_info_empty;
extern phrase lng_wallet_depool_info_id;
extern phrase lng_wallet_depool_info_remaining_amount;
extern phrase lng_wallet_depool_info_last_withdrawal_time;
extern phrase lng_wallet_depool_info_withdrawal_period;
extern phrase lng_wallet_depool_info_withdrawal_value;
extern phrase lng_wallet_depool_info_owner;

extern phrase lng_wallet_row_from;
extern phrase lng_wallet_row_minted;
extern phrase lng_wallet_row_token_wallet_deployed;
extern phrase lng_wallet_row_eth_event_notification;
extern phrase lng_wallet_row_ton_event_notification;
extern phrase lng_wallet_row_change;
extern phrase lng_wallet_row_reward_from;
extern phrase lng_wallet_row_reward_notification_from;
extern phrase lng_wallet_row_swap_back_to;
extern phrase lng_wallet_row_token_transfer;
extern phrase lng_wallet_row_ordinary_stake_to;
extern phrase lng_wallet_row_to;
extern phrase lng_wallet_row_new_event_status;
extern phrase lng_wallet_row_init;
extern phrase lng_wallet_row_service;
extern phrase lng_wallet_row_fees;
extern phrase lng_wallet_row_pending_date;
extern phrase lng_wallet_click_to_decrypt;
extern phrase lng_wallet_decrypt_failed;

extern phrase lng_wallet_view_title;
extern phrase lng_wallet_view_ordinary_stake;
extern phrase lng_wallet_view_round_complete;
extern phrase lng_wallet_view_transaction_fee;
extern phrase lng_wallet_view_storage_fee;
extern phrase lng_wallet_view_sender;
extern phrase lng_wallet_view_depool;
extern phrase lng_wallet_view_recipient;
extern phrase lng_wallet_view_date;
extern phrase lng_wallet_view_hash;
extern phrase lng_wallet_view_comment;
extern phrase lng_wallet_view_send_to_address;
extern phrase lng_wallet_view_send_to_recipient;
extern phrase lng_wallet_view_execute_swapback;
extern phrase lng_wallet_view_collect_tokens;

extern phrase lng_wallet_receive_title;
extern phrase lng_wallet_receive_description;
extern phrase lng_wallet_receive_description_test;
extern phrase lng_wallet_receive_show_as_packed;
extern phrase lng_wallet_receive_create_invoice;
extern phrase lng_wallet_receive_share;
extern phrase lng_wallet_receive_swap;
extern phrase lng_wallet_receive_deploy;
extern phrase lng_wallet_receive_copied;
extern phrase lng_wallet_receive_address_copied;
extern phrase lng_wallet_receive_copied_qr;

extern phrase lng_wallet_invoice_title;
extern phrase lng_wallet_invoice_amount;
extern phrase lng_wallet_invoice_number;
extern phrase lng_wallet_invoice_comment;
extern phrase lng_wallet_invoice_comment_about;
extern phrase lng_wallet_invoice_url;
extern phrase lng_wallet_invoice_copy_url;
extern phrase lng_wallet_invoice_url_about;
extern phrase lng_wallet_invoice_url_about_test;
extern phrase lng_wallet_invoice_generate_qr;
extern phrase lng_wallet_invoice_share;
extern phrase lng_wallet_invoice_qr_title;
extern phrase lng_wallet_invoice_qr_amount;
extern phrase lng_wallet_invoice_qr_comment;
extern phrase lng_wallet_invoice_qr_share;
extern phrase lng_wallet_invoice_copied;

extern phrase lng_wallet_menu_settings;
extern phrase lng_wallet_menu_keystore;
extern phrase lng_wallet_menu_change_passcode;
extern phrase lng_wallet_menu_export;
extern phrase lng_wallet_menu_delete;

extern phrase lng_wallet_delete_title;
extern phrase lng_wallet_delete_about;
extern phrase lng_wallet_delete_disconnect;

extern phrase lng_wallet_send_title;
extern phrase lng_wallet_send_token_transfer_direct;
extern phrase lng_wallet_send_token_transfer_to_owner;
extern phrase lng_wallet_send_token_transfer_swapback;
extern phrase lng_wallet_send_token_proxy_address;
extern phrase lng_wallet_send_recipient;
extern phrase lng_wallet_send_address;
extern phrase lng_wallet_send_token_direct_address;
extern phrase lng_wallet_send_token_owner_address;
extern phrase lng_wallet_send_token_ethereum_address;
extern phrase lng_wallet_send_token_proxy_address_placeholder;
extern phrase lng_wallet_send_about;
extern phrase lng_wallet_send_amount;
extern phrase lng_wallet_send_balance;
extern phrase lng_wallet_send_comment;
extern phrase lng_wallet_send_button;
extern phrase lng_wallet_send_button_amount;
extern phrase lng_wallet_send_button_swap_back;
extern phrase lng_wallet_send_button_swap_back_amount;

extern phrase lng_wallet_send_stake_title;
extern phrase lng_wallet_send_stake_amount;
extern phrase lng_wallet_send_stake_balance;
extern phrase lng_wallet_send_stake_warning;
extern phrase lng_wallet_send_stake_button;
extern phrase lng_wallet_send_stake_button_amount;

extern phrase lng_wallet_withdraw_title;
extern phrase lng_wallet_withdraw_all;
extern phrase lng_wallet_withdraw_part;
extern phrase lng_wallet_withdraw_amount;
extern phrase lng_wallet_withdraw_locked;
extern phrase lng_wallet_withdraw_button_part;
extern phrase lng_wallet_withdraw_button_all;
extern phrase lng_wallet_withdraw_button_amount;

extern phrase lng_wallet_cancel_withdrawal_title;
extern phrase lng_wallet_cancel_withdrawal_description;
extern phrase lng_wallet_cancel_withdrawal_button;

extern phrase lng_wallet_deploy_token_wallet_title;
extern phrase lng_wallet_deploy_token_wallet_owned_description;
extern phrase lng_wallet_deploy_token_wallet_target_description;
extern phrase lng_wallet_deploy_token_wallet_button;

extern phrase lng_wallet_collect_tokens_title;
extern phrase lng_wallet_collect_tokens_details;
extern phrase lng_wallet_collect_tokens_symbol;
extern phrase lng_wallet_collect_tokens_loading;
extern phrase lng_wallet_collect_tokens_status;
extern phrase lng_wallet_collect_tokens_confirmations;
extern phrase lng_wallet_collect_tokens_rejections;
extern phrase lng_wallet_collect_tokens_description;
extern phrase lng_wallet_collect_tokens_button;

extern phrase lng_wallet_send_failed_title;
extern phrase lng_wallet_send_failed_text;

extern phrase lng_wallet_add_depool_succeeded;
extern phrase lng_wallet_add_depool_failed_title;
extern phrase lng_wallet_add_depool_failed_text;

extern phrase lng_wallet_add_token_succeeded;
extern phrase lng_wallet_add_token_failed_title;
extern phrase lng_wallet_add_token_failed_text;

extern phrase lng_wallet_add_multisig_succeeded;
extern phrase lng_wallet_add_multisig_failed_title;
extern phrase lng_wallet_add_multisig_failed_text;

extern phrase lng_wallet_send_tokens_recipient_not_found;
extern phrase lng_wallet_send_tokens_recipient_changed;

extern phrase lng_wallet_confirm_title;
extern phrase lng_wallet_confirm_text;
extern phrase lng_wallet_confirm_withdrawal_text;
extern phrase lng_wallet_confirm_cancel_withdrawal_text;
extern phrase lng_wallet_confirm_deploy_token_wallet_text;
extern phrase lng_wallet_confirm_collect_tokens_text;
extern phrase lng_wallet_confirm_fee;
extern phrase lng_wallet_confirm_send;
extern phrase lng_wallet_confirm_withdrawal;
extern phrase lng_wallet_confirm_cancel_withdrawal;
extern phrase lng_wallet_confirm_deploy_token_wallet;
extern phrase lng_wallet_confirm_execute;
extern phrase lng_wallet_confirm_warning;

extern phrase lng_wallet_same_address_title;
extern phrase lng_wallet_same_address_text;
extern phrase lng_wallet_same_address_proceed;

extern phrase lng_wallet_passcode_title;
extern phrase lng_wallet_passcode_enter;
extern phrase lng_wallet_passcode_next;
extern phrase lng_wallet_passcode_incorrect;

extern phrase lng_wallet_sending_title;
extern phrase lng_wallet_sending_text;
extern phrase lng_wallet_sending_all_stake;

extern phrase lng_wallet_sent_title;
extern phrase lng_wallet_sent_cancel_withdrawal;
extern phrase lng_wallet_sent_deploy_token_wallet;
extern phrase lng_wallet_sent_collect_tokens;
extern phrase lng_wallet_sent_close;
extern phrase lng_wallet_sent_close_view;

extern phrase lng_wallet_add_asset_title;
extern phrase lng_wallet_add_asset_token;
extern phrase lng_wallet_add_asset_depool;
extern phrase lng_wallet_add_asset_multisig;
extern phrase lng_wallet_add_asset_address;
extern phrase lng_wallet_add_asset_token_address;
extern phrase lng_wallet_add_asset_depool_address;
extern phrase lng_wallet_add_asset_multisig_address;
extern phrase lng_wallet_add_asset_confirm;

extern phrase lng_wallet_settings_title;
extern phrase lng_wallet_settings_version_title;
extern phrase lng_wallet_settings_autoupdate;
extern phrase lng_wallet_settings_version;
extern phrase lng_wallet_settings_checking;
extern phrase lng_wallet_settings_latest;
extern phrase lng_wallet_settings_check;
extern phrase lng_wallet_settings_downloading;
extern phrase lng_wallet_settings_ready;
extern phrase lng_wallet_settings_fail;
extern phrase lng_wallet_settings_update;
extern phrase lng_wallet_settings_configuration;
extern phrase lng_wallet_settings_update_config;
extern phrase lng_wallet_settings_config_url;
extern phrase lng_wallet_settings_config_from_file;
extern phrase lng_wallet_settings_mainnet;
extern phrase lng_wallet_settings_testnet;
extern phrase lng_wallet_settings_blockchain_name;

extern phrase lng_wallet_keystore_title;
extern phrase lng_wallet_keystore_create;
extern phrase lng_wallet_keystore_pubkey_copied;

extern phrase lng_wallet_event_status_unknown;
extern phrase lng_wallet_event_status_in_process;
extern phrase lng_wallet_event_status_confirmed;
extern phrase lng_wallet_event_status_executed;
extern phrase lng_wallet_event_status_rejected;

extern phrase lng_wallet_warning_reconnect;
extern phrase lng_wallet_warning_blockchain_name;
extern phrase lng_wallet_warning_to_testnet;
extern phrase lng_wallet_warning_to_mainnet;
extern phrase lng_wallet_bad_config;
extern phrase lng_wallet_bad_config_url;
extern phrase lng_wallet_wait_pending;
extern phrase lng_wallet_wait_syncing;

extern phrase lng_wallet_downloaded;

extern Fn<phrase(int)> lng_wallet_refreshed_minutes_ago;
extern Fn<phrase(QDate)> lng_wallet_short_date;
extern Fn<phrase(QTime)> lng_wallet_short_time;
extern Fn<phrase(QString, const Ton::Symbol &)> lng_wallet_grams_count;
extern Fn<phrase(QString, const Ton::Symbol &)> lng_wallet_grams_count_sent;
extern Fn<phrase(QString)> lng_wallet_grams_count_withdrawn;
extern Fn<phrase(Ton::EthEventStatus)> lng_wallet_eth_event_status;
extern Fn<phrase(Ton::TonEventStatus)> lng_wallet_ton_event_status;

}  // namespace ph
