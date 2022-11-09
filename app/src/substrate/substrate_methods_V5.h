/*******************************************************************************
 *  (c) 2019 - 2022 Zondax AG
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextern-c-compat"
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include "substrate_types_V5.h"
#include <stddef.h>
#include <stdint.h>
#ifdef LEDGER_SPECIFIC
#include "bolos_target.h"
#endif

#define PD_CALL_SYSTEM_V5 0
#define PD_CALL_PROXY_V5 5
#define PD_CALL_BALANCES_V5 40

#define PD_CALL_BALANCES_TRANSFER_ALL_V5 4
typedef struct {
    pd_AccountIdLookupOfT_V5_t dest;
    pd_bool_t keep_alive;
} pd_balances_transfer_all_V5_t;

#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif

#define PD_CALL_PROXY_ADD_PROXY_V5 1
typedef struct {
    pd_AccountIdLookupOfT_V5_t delegate;
    pd_ProxyType_V5_t proxy_type;
    pd_BlockNumber_t delay;
} pd_proxy_add_proxy_V5_t;

#define PD_CALL_PROXY_REMOVE_PROXY_V5 2
typedef struct {
    pd_AccountIdLookupOfT_V5_t delegate;
    pd_ProxyType_V5_t proxy_type;
    pd_BlockNumber_t delay;
} pd_proxy_remove_proxy_V5_t;

#define PD_CALL_PROXY_REMOVE_PROXIES_V5 3
typedef struct {
} pd_proxy_remove_proxies_V5_t;

#define PD_CALL_PROXY_CREATE_PURE_V5 4
typedef struct {
    pd_ProxyType_V5_t proxy_type;
    pd_BlockNumber_t delay;
    pd_u16_t index;
} pd_proxy_create_pure_V5_t;

#define PD_CALL_PROXY_KILL_PURE_V5 5
typedef struct {
    pd_AccountIdLookupOfT_V5_t spawner;
    pd_ProxyType_V5_t proxy_type;
    pd_u16_t index;
    pd_Compactu32_t height;
    pd_Compactu32_t ext_index;
} pd_proxy_kill_pure_V5_t;

#define PD_CALL_PROXY_ANNOUNCE_V5 6
typedef struct {
    pd_AccountIdLookupOfT_V5_t real;
    pd_CallHashOf_V5_t call_hash;
} pd_proxy_announce_V5_t;

#define PD_CALL_PROXY_REMOVE_ANNOUNCEMENT_V5 7
typedef struct {
    pd_AccountIdLookupOfT_V5_t real;
    pd_CallHashOf_V5_t call_hash;
} pd_proxy_remove_announcement_V5_t;

#define PD_CALL_PROXY_REJECT_ANNOUNCEMENT_V5 8
typedef struct {
    pd_AccountIdLookupOfT_V5_t delegate;
    pd_CallHashOf_V5_t call_hash;
} pd_proxy_reject_announcement_V5_t;

#define PD_CALL_PROXY_PROXY_ANNOUNCED_V5 9
typedef struct {
    pd_AccountIdLookupOfT_V5_t delegate;
    pd_AccountIdLookupOfT_V5_t real;
    pd_OptionProxyType_V5_t force_proxy_type;
    pd_Call_t call;
} pd_proxy_proxy_announced_V5_t;

#define PD_CALL_BALANCES_FORCE_UNRESERVE_V5 5
typedef struct {
    pd_AccountIdLookupOfT_V5_t who;
    pd_Balance_t amount;
} pd_balances_force_unreserve_V5_t;

#endif

typedef union {
    pd_balances_transfer_all_V5_t balances_transfer_all_V5;
#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
    pd_proxy_add_proxy_V5_t proxy_add_proxy_V5;
    pd_proxy_remove_proxy_V5_t proxy_remove_proxy_V5;
    pd_proxy_remove_proxies_V5_t proxy_remove_proxies_V5;
    pd_proxy_create_pure_V5_t proxy_create_pure_V5;
    pd_proxy_kill_pure_V5_t proxy_kill_pure_V5;
    pd_proxy_announce_V5_t proxy_announce_V5;
    pd_proxy_remove_announcement_V5_t proxy_remove_announcement_V5;
    pd_proxy_reject_announcement_V5_t proxy_reject_announcement_V5;
    pd_proxy_proxy_announced_V5_t proxy_proxy_announced_V5;
    pd_balances_force_unreserve_V5_t balances_force_unreserve_V5;
#endif
} pd_MethodBasic_V5_t;

#define PD_CALL_BALANCES_TRANSFER_V5 0
typedef struct {
    pd_AccountIdLookupOfT_V5_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_V5_t;

#define PD_CALL_BALANCES_FORCE_TRANSFER_V5 2
typedef struct {
    pd_AccountIdLookupOfT_V5_t source;
    pd_AccountIdLookupOfT_V5_t dest;
    pd_CompactBalance_t amount;
} pd_balances_force_transfer_V5_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V5 3
typedef struct {
    pd_AccountIdLookupOfT_V5_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_keep_alive_V5_t;

#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
#define PD_CALL_SYSTEM_FILL_BLOCK_V5 0
typedef struct {
    pd_Perbill_V5_t ratio;
} pd_system_fill_block_V5_t;

#define PD_CALL_SYSTEM_REMARK_V5 1
typedef struct {
    pd_Vecu8_t remark;
} pd_system_remark_V5_t;

#define PD_CALL_SYSTEM_SET_HEAP_PAGES_V5 2
typedef struct {
    pd_u64_t pages;
} pd_system_set_heap_pages_V5_t;

#define PD_CALL_SYSTEM_SET_CODE_V5 3
typedef struct {
    pd_Vecu8_t code;
} pd_system_set_code_V5_t;

#define PD_CALL_SYSTEM_SET_CODE_WITHOUT_CHECKS_V5 4
typedef struct {
    pd_Vecu8_t code;
} pd_system_set_code_without_checks_V5_t;

#define PD_CALL_SYSTEM_REMARK_WITH_EVENT_V5 8
typedef struct {
    pd_Vecu8_t remark;
} pd_system_remark_with_event_V5_t;

#define PD_CALL_PROXY_PROXY_V5 0
typedef struct {
    pd_AccountIdLookupOfT_V5_t real;
    pd_OptionProxyType_V5_t force_proxy_type;
    pd_Call_t call;
} pd_proxy_proxy_V5_t;

#define PD_CALL_BALANCES_SET_BALANCE_V5 1
typedef struct {
    pd_AccountIdLookupOfT_V5_t who;
    pd_CompactBalance_t new_free;
    pd_CompactBalance_t new_reserved;
} pd_balances_set_balance_V5_t;

#endif

typedef union {
    pd_balances_transfer_V5_t balances_transfer_V5;
    pd_balances_force_transfer_V5_t balances_force_transfer_V5;
    pd_balances_transfer_keep_alive_V5_t balances_transfer_keep_alive_V5;
#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
    pd_system_fill_block_V5_t system_fill_block_V5;
    pd_system_remark_V5_t system_remark_V5;
    pd_system_set_heap_pages_V5_t system_set_heap_pages_V5;
    pd_system_set_code_V5_t system_set_code_V5;
    pd_system_set_code_without_checks_V5_t system_set_code_without_checks_V5;
    pd_system_remark_with_event_V5_t system_remark_with_event_V5;
    pd_proxy_proxy_V5_t proxy_proxy_V5;
    pd_balances_set_balance_V5_t balances_set_balance_V5;
#endif
} pd_MethodNested_V5_t;

typedef union {
    pd_MethodBasic_V5_t basic;
    pd_MethodNested_V5_t nested;
} pd_Method_V5_t;

#ifdef __cplusplus
}
#endif

#pragma clang diagnostic pop
