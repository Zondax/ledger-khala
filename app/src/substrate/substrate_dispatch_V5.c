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

#include "substrate_dispatch_V5.h"
#include "substrate_strings.h"
#include "zxmacros.h"
#include <stdint.h>
#ifdef LEDGER_SPECIFIC
#include "bolos_target.h"
#endif

__Z_INLINE parser_error_t _readMethod_balances_transfer_V5(
    parser_context_t* c, pd_balances_transfer_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->dest))
    CHECK_ERROR(_readCompactBalance(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_force_transfer_V5(
    parser_context_t* c, pd_balances_force_transfer_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->source))
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->dest))
    CHECK_ERROR(_readCompactBalance(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_transfer_keep_alive_V5(
    parser_context_t* c, pd_balances_transfer_keep_alive_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->dest))
    CHECK_ERROR(_readCompactBalance(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_transfer_all_V5(
    parser_context_t* c, pd_balances_transfer_all_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->dest))
    CHECK_ERROR(_readbool(c, &m->keep_alive))
    return parser_ok;
}

#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
__Z_INLINE parser_error_t _readMethod_system_fill_block_V5(
    parser_context_t* c, pd_system_fill_block_V5_t* m)
{
    CHECK_ERROR(_readPerbill_V5(c, &m->ratio))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_remark_V5(
    parser_context_t* c, pd_system_remark_V5_t* m)
{
    CHECK_ERROR(_readVecu8(c, &m->remark))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_heap_pages_V5(
    parser_context_t* c, pd_system_set_heap_pages_V5_t* m)
{
    CHECK_ERROR(_readu64(c, &m->pages))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_code_V5(
    parser_context_t* c, pd_system_set_code_V5_t* m)
{
    CHECK_ERROR(_readVecu8(c, &m->code))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_code_without_checks_V5(
    parser_context_t* c, pd_system_set_code_without_checks_V5_t* m)
{
    CHECK_ERROR(_readVecu8(c, &m->code))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_remark_with_event_V5(
    parser_context_t* c, pd_system_remark_with_event_V5_t* m)
{
    CHECK_ERROR(_readVecu8(c, &m->remark))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_proxy_V5(
    parser_context_t* c, pd_proxy_proxy_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->real))
    CHECK_ERROR(_readOptionProxyType_V5(c, &m->force_proxy_type))
    CHECK_ERROR(_readCall(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_add_proxy_V5(
    parser_context_t* c, pd_proxy_add_proxy_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->delegate))
    CHECK_ERROR(_readProxyType_V5(c, &m->proxy_type))
    CHECK_ERROR(_readBlockNumber(c, &m->delay))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_remove_proxy_V5(
    parser_context_t* c, pd_proxy_remove_proxy_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->delegate))
    CHECK_ERROR(_readProxyType_V5(c, &m->proxy_type))
    CHECK_ERROR(_readBlockNumber(c, &m->delay))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_remove_proxies_V5(
    parser_context_t* c, pd_proxy_remove_proxies_V5_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_create_pure_V5(
    parser_context_t* c, pd_proxy_create_pure_V5_t* m)
{
    CHECK_ERROR(_readProxyType_V5(c, &m->proxy_type))
    CHECK_ERROR(_readBlockNumber(c, &m->delay))
    CHECK_ERROR(_readu16(c, &m->index))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_kill_pure_V5(
    parser_context_t* c, pd_proxy_kill_pure_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->spawner))
    CHECK_ERROR(_readProxyType_V5(c, &m->proxy_type))
    CHECK_ERROR(_readu16(c, &m->index))
    CHECK_ERROR(_readCompactu32(c, &m->height))
    CHECK_ERROR(_readCompactu32(c, &m->ext_index))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_announce_V5(
    parser_context_t* c, pd_proxy_announce_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->real))
    CHECK_ERROR(_readCallHashOf_V5(c, &m->call_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_remove_announcement_V5(
    parser_context_t* c, pd_proxy_remove_announcement_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->real))
    CHECK_ERROR(_readCallHashOf_V5(c, &m->call_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_reject_announcement_V5(
    parser_context_t* c, pd_proxy_reject_announcement_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->delegate))
    CHECK_ERROR(_readCallHashOf_V5(c, &m->call_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_proxy_announced_V5(
    parser_context_t* c, pd_proxy_proxy_announced_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->delegate))
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->real))
    CHECK_ERROR(_readOptionProxyType_V5(c, &m->force_proxy_type))
    CHECK_ERROR(_readCall(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_set_balance_V5(
    parser_context_t* c, pd_balances_set_balance_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->who))
    CHECK_ERROR(_readCompactBalance(c, &m->new_free))
    CHECK_ERROR(_readCompactBalance(c, &m->new_reserved))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_force_unreserve_V5(
    parser_context_t* c, pd_balances_force_unreserve_V5_t* m)
{
    CHECK_ERROR(_readAccountIdLookupOfT_V5(c, &m->who))
    CHECK_ERROR(_readBalance(c, &m->amount))
    return parser_ok;
}

#endif

parser_error_t _readMethod_V5(
    parser_context_t* c,
    uint8_t moduleIdx,
    uint8_t callIdx,
    pd_Method_V5_t* method)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {

    case 10240: /* module 40 call 0 */
        CHECK_ERROR(_readMethod_balances_transfer_V5(c, &method->nested.balances_transfer_V5))
        break;
    case 10242: /* module 40 call 2 */
        CHECK_ERROR(_readMethod_balances_force_transfer_V5(c, &method->nested.balances_force_transfer_V5))
        break;
    case 10243: /* module 40 call 3 */
        CHECK_ERROR(_readMethod_balances_transfer_keep_alive_V5(c, &method->nested.balances_transfer_keep_alive_V5))
        break;
    case 10244: /* module 40 call 4 */
        CHECK_ERROR(_readMethod_balances_transfer_all_V5(c, &method->basic.balances_transfer_all_V5))
        break;

#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
    case 0: /* module 0 call 0 */
        CHECK_ERROR(_readMethod_system_fill_block_V5(c, &method->nested.system_fill_block_V5))
        break;
    case 1: /* module 0 call 1 */
        CHECK_ERROR(_readMethod_system_remark_V5(c, &method->nested.system_remark_V5))
        break;
    case 2: /* module 0 call 2 */
        CHECK_ERROR(_readMethod_system_set_heap_pages_V5(c, &method->nested.system_set_heap_pages_V5))
        break;
    case 3: /* module 0 call 3 */
        CHECK_ERROR(_readMethod_system_set_code_V5(c, &method->nested.system_set_code_V5))
        break;
    case 4: /* module 0 call 4 */
        CHECK_ERROR(_readMethod_system_set_code_without_checks_V5(c, &method->nested.system_set_code_without_checks_V5))
        break;
    case 8: /* module 0 call 8 */
        CHECK_ERROR(_readMethod_system_remark_with_event_V5(c, &method->nested.system_remark_with_event_V5))
        break;
    case 1280: /* module 5 call 0 */
        CHECK_ERROR(_readMethod_proxy_proxy_V5(c, &method->nested.proxy_proxy_V5))
        break;
    case 1281: /* module 5 call 1 */
        CHECK_ERROR(_readMethod_proxy_add_proxy_V5(c, &method->basic.proxy_add_proxy_V5))
        break;
    case 1282: /* module 5 call 2 */
        CHECK_ERROR(_readMethod_proxy_remove_proxy_V5(c, &method->basic.proxy_remove_proxy_V5))
        break;
    case 1283: /* module 5 call 3 */
        CHECK_ERROR(_readMethod_proxy_remove_proxies_V5(c, &method->basic.proxy_remove_proxies_V5))
        break;
    case 1284: /* module 5 call 4 */
        CHECK_ERROR(_readMethod_proxy_create_pure_V5(c, &method->basic.proxy_create_pure_V5))
        break;
    case 1285: /* module 5 call 5 */
        CHECK_ERROR(_readMethod_proxy_kill_pure_V5(c, &method->basic.proxy_kill_pure_V5))
        break;
    case 1286: /* module 5 call 6 */
        CHECK_ERROR(_readMethod_proxy_announce_V5(c, &method->basic.proxy_announce_V5))
        break;
    case 1287: /* module 5 call 7 */
        CHECK_ERROR(_readMethod_proxy_remove_announcement_V5(c, &method->basic.proxy_remove_announcement_V5))
        break;
    case 1288: /* module 5 call 8 */
        CHECK_ERROR(_readMethod_proxy_reject_announcement_V5(c, &method->basic.proxy_reject_announcement_V5))
        break;
    case 1289: /* module 5 call 9 */
        CHECK_ERROR(_readMethod_proxy_proxy_announced_V5(c, &method->basic.proxy_proxy_announced_V5))
        break;
    case 10241: /* module 40 call 1 */
        CHECK_ERROR(_readMethod_balances_set_balance_V5(c, &method->nested.balances_set_balance_V5))
        break;
    case 10245: /* module 40 call 5 */
        CHECK_ERROR(_readMethod_balances_force_unreserve_V5(c, &method->basic.balances_force_unreserve_V5))
        break;
#endif
    default:
        return parser_unexpected_callIndex;
    }

    return parser_ok;
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

const char* _getMethod_ModuleName_V5(uint8_t moduleIdx)
{
    switch (moduleIdx) {
    case 40:
        return STR_MO_BALANCES;
#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
    case 0:
        return STR_MO_SYSTEM;
    case 5:
        return STR_MO_PROXY;
#endif
    default:
        return NULL;
    }

    return NULL;
}

const char* _getMethod_Name_V5(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 10240: /* module 40 call 0 */
        return STR_ME_TRANSFER;
    case 10242: /* module 40 call 2 */
        return STR_ME_FORCE_TRANSFER;
    case 10243: /* module 40 call 3 */
        return STR_ME_TRANSFER_KEEP_ALIVE;
    case 10244: /* module 40 call 4 */
        return STR_ME_TRANSFER_ALL;
    default:
        return _getMethod_Name_V5_ParserFull(callPrivIdx);
    }

    return NULL;
}

const char* _getMethod_Name_V5_ParserFull(uint16_t callPrivIdx)
{
    switch (callPrivIdx) {
#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
    case 0: /* module 0 call 0 */
        return STR_ME_FILL_BLOCK;
    case 1: /* module 0 call 1 */
        return STR_ME_REMARK;
    case 2: /* module 0 call 2 */
        return STR_ME_SET_HEAP_PAGES;
    case 3: /* module 0 call 3 */
        return STR_ME_SET_CODE;
    case 4: /* module 0 call 4 */
        return STR_ME_SET_CODE_WITHOUT_CHECKS;
    case 8: /* module 0 call 8 */
        return STR_ME_REMARK_WITH_EVENT;
    case 1280: /* module 5 call 0 */
        return STR_ME_PROXY;
    case 1281: /* module 5 call 1 */
        return STR_ME_ADD_PROXY;
    case 1282: /* module 5 call 2 */
        return STR_ME_REMOVE_PROXY;
    case 1283: /* module 5 call 3 */
        return STR_ME_REMOVE_PROXIES;
    case 1284: /* module 5 call 4 */
        return STR_ME_CREATE_PURE;
    case 1285: /* module 5 call 5 */
        return STR_ME_KILL_PURE;
    case 1286: /* module 5 call 6 */
        return STR_ME_ANNOUNCE;
    case 1287: /* module 5 call 7 */
        return STR_ME_REMOVE_ANNOUNCEMENT;
    case 1288: /* module 5 call 8 */
        return STR_ME_REJECT_ANNOUNCEMENT;
    case 1289: /* module 5 call 9 */
        return STR_ME_PROXY_ANNOUNCED;
    case 10241: /* module 40 call 1 */
        return STR_ME_SET_BALANCE;
    case 10245: /* module 40 call 5 */
        return STR_ME_FORCE_UNRESERVE;
#endif
    default:
        return NULL;
    }

    return NULL;
}

uint8_t _getMethod_NumItems_V5(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 10240: /* module 40 call 0 */
        return 2;
    case 10242: /* module 40 call 2 */
        return 3;
    case 10243: /* module 40 call 3 */
        return 2;
    case 10244: /* module 40 call 4 */
        return 2;
#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
    case 0: /* module 0 call 0 */
        return 1;
    case 1: /* module 0 call 1 */
        return 1;
    case 2: /* module 0 call 2 */
        return 1;
    case 3: /* module 0 call 3 */
        return 1;
    case 4: /* module 0 call 4 */
        return 1;
    case 8: /* module 0 call 8 */
        return 1;
    case 1280: /* module 5 call 0 */
        return 3;
    case 1281: /* module 5 call 1 */
        return 3;
    case 1282: /* module 5 call 2 */
        return 3;
    case 1283: /* module 5 call 3 */
        return 0;
    case 1284: /* module 5 call 4 */
        return 3;
    case 1285: /* module 5 call 5 */
        return 5;
    case 1286: /* module 5 call 6 */
        return 2;
    case 1287: /* module 5 call 7 */
        return 2;
    case 1288: /* module 5 call 8 */
        return 2;
    case 1289: /* module 5 call 9 */
        return 4;
    case 10241: /* module 40 call 1 */
        return 3;
    case 10245: /* module 40 call 5 */
        return 2;
#endif
    default:
        return 0;
    }

    return 0;
}

const char* _getMethod_ItemName_V5(uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 10240: /* module 40 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 10242: /* module 40 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_source;
        case 1:
            return STR_IT_dest;
        case 2:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 10243: /* module 40 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 10244: /* module 40 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_keep_alive;
        default:
            return NULL;
        }
#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
    case 0: /* module 0 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_ratio;
        default:
            return NULL;
        }
    case 1: /* module 0 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_remark;
        default:
            return NULL;
        }
    case 2: /* module 0 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_pages;
        default:
            return NULL;
        }
    case 3: /* module 0 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_code;
        default:
            return NULL;
        }
    case 4: /* module 0 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_code;
        default:
            return NULL;
        }
    case 8: /* module 0 call 8 */
        switch (itemIdx) {
        case 0:
            return STR_IT_remark;
        default:
            return NULL;
        }
    case 1280: /* module 5 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_real;
        case 1:
            return STR_IT_force_proxy_type;
        case 2:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 1281: /* module 5 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delegate;
        case 1:
            return STR_IT_proxy_type;
        case 2:
            return STR_IT_delay;
        default:
            return NULL;
        }
    case 1282: /* module 5 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delegate;
        case 1:
            return STR_IT_proxy_type;
        case 2:
            return STR_IT_delay;
        default:
            return NULL;
        }
    case 1283: /* module 5 call 3 */
        switch (itemIdx) {
        default:
            return NULL;
        }
    case 1284: /* module 5 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_proxy_type;
        case 1:
            return STR_IT_delay;
        case 2:
            return STR_IT_index;
        default:
            return NULL;
        }
    case 1285: /* module 5 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_spawner;
        case 1:
            return STR_IT_proxy_type;
        case 2:
            return STR_IT_index;
        case 3:
            return STR_IT_height;
        case 4:
            return STR_IT_ext_index;
        default:
            return NULL;
        }
    case 1286: /* module 5 call 6 */
        switch (itemIdx) {
        case 0:
            return STR_IT_real;
        case 1:
            return STR_IT_call_hash;
        default:
            return NULL;
        }
    case 1287: /* module 5 call 7 */
        switch (itemIdx) {
        case 0:
            return STR_IT_real;
        case 1:
            return STR_IT_call_hash;
        default:
            return NULL;
        }
    case 1288: /* module 5 call 8 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delegate;
        case 1:
            return STR_IT_call_hash;
        default:
            return NULL;
        }
    case 1289: /* module 5 call 9 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delegate;
        case 1:
            return STR_IT_real;
        case 2:
            return STR_IT_force_proxy_type;
        case 3:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 10241: /* module 40 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        case 1:
            return STR_IT_new_free;
        case 2:
            return STR_IT_new_reserved;
        default:
            return NULL;
        }
    case 10245: /* module 40 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        case 1:
            return STR_IT_amount;
        default:
            return NULL;
        }
#endif
    default:
        return NULL;
    }

    return NULL;
}

parser_error_t _getMethod_ItemValue_V5(
    pd_Method_V5_t* m,
    uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx,
    char* outValue, uint16_t outValueLen,
    uint8_t pageIdx, uint8_t* pageCount)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 10240: /* module 40 call 0 */
        switch (itemIdx) {
        case 0: /* balances_transfer_V5 - dest */;
            return _toStringAccountIdLookupOfT_V5(
                &m->nested.balances_transfer_V5.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_transfer_V5 - amount */;
            return _toStringCompactBalance(
                &m->nested.balances_transfer_V5.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10242: /* module 40 call 2 */
        switch (itemIdx) {
        case 0: /* balances_force_transfer_V5 - source */;
            return _toStringAccountIdLookupOfT_V5(
                &m->nested.balances_force_transfer_V5.source,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_force_transfer_V5 - dest */;
            return _toStringAccountIdLookupOfT_V5(
                &m->nested.balances_force_transfer_V5.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* balances_force_transfer_V5 - amount */;
            return _toStringCompactBalance(
                &m->nested.balances_force_transfer_V5.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10243: /* module 40 call 3 */
        switch (itemIdx) {
        case 0: /* balances_transfer_keep_alive_V5 - dest */;
            return _toStringAccountIdLookupOfT_V5(
                &m->nested.balances_transfer_keep_alive_V5.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_transfer_keep_alive_V5 - amount */;
            return _toStringCompactBalance(
                &m->nested.balances_transfer_keep_alive_V5.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10244: /* module 40 call 4 */
        switch (itemIdx) {
        case 0: /* balances_transfer_all_V5 - dest */;
            return _toStringAccountIdLookupOfT_V5(
                &m->basic.balances_transfer_all_V5.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_transfer_all_V5 - keep_alive */;
            return _toStringbool(
                &m->basic.balances_transfer_all_V5.keep_alive,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
    case 0: /* module 0 call 0 */
        switch (itemIdx) {
        case 0: /* system_fill_block_V5 - ratio */;
            return _toStringPerbill_V5(
                &m->nested.system_fill_block_V5.ratio,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1: /* module 0 call 1 */
        switch (itemIdx) {
        case 0: /* system_remark_V5 - remark */;
            return _toStringVecu8(
                &m->nested.system_remark_V5.remark,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2: /* module 0 call 2 */
        switch (itemIdx) {
        case 0: /* system_set_heap_pages_V5 - pages */;
            return _toStringu64(
                &m->nested.system_set_heap_pages_V5.pages,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3: /* module 0 call 3 */
        switch (itemIdx) {
        case 0: /* system_set_code_V5 - code */;
            return _toStringVecu8(
                &m->nested.system_set_code_V5.code,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4: /* module 0 call 4 */
        switch (itemIdx) {
        case 0: /* system_set_code_without_checks_V5 - code */;
            return _toStringVecu8(
                &m->nested.system_set_code_without_checks_V5.code,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8: /* module 0 call 8 */
        switch (itemIdx) {
        case 0: /* system_remark_with_event_V5 - remark */;
            return _toStringVecu8(
                &m->nested.system_remark_with_event_V5.remark,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1280: /* module 5 call 0 */
        switch (itemIdx) {
        case 0: /* proxy_proxy_V5 - real */;
            return _toStringAccountIdLookupOfT_V5(
                &m->nested.proxy_proxy_V5.real,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_proxy_V5 - force_proxy_type */;
            return _toStringOptionProxyType_V5(
                &m->nested.proxy_proxy_V5.force_proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_proxy_V5 - call */;
            return _toStringCall(
                &m->nested.proxy_proxy_V5.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1281: /* module 5 call 1 */
        switch (itemIdx) {
        case 0: /* proxy_add_proxy_V5 - delegate */;
            return _toStringAccountIdLookupOfT_V5(
                &m->basic.proxy_add_proxy_V5.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_add_proxy_V5 - proxy_type */;
            return _toStringProxyType_V5(
                &m->basic.proxy_add_proxy_V5.proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_add_proxy_V5 - delay */;
            return _toStringBlockNumber(
                &m->basic.proxy_add_proxy_V5.delay,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1282: /* module 5 call 2 */
        switch (itemIdx) {
        case 0: /* proxy_remove_proxy_V5 - delegate */;
            return _toStringAccountIdLookupOfT_V5(
                &m->basic.proxy_remove_proxy_V5.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_remove_proxy_V5 - proxy_type */;
            return _toStringProxyType_V5(
                &m->basic.proxy_remove_proxy_V5.proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_remove_proxy_V5 - delay */;
            return _toStringBlockNumber(
                &m->basic.proxy_remove_proxy_V5.delay,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1283: /* module 5 call 3 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
    case 1284: /* module 5 call 4 */
        switch (itemIdx) {
        case 0: /* proxy_create_pure_V5 - proxy_type */;
            return _toStringProxyType_V5(
                &m->basic.proxy_create_pure_V5.proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_create_pure_V5 - delay */;
            return _toStringBlockNumber(
                &m->basic.proxy_create_pure_V5.delay,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_create_pure_V5 - index */;
            return _toStringu16(
                &m->basic.proxy_create_pure_V5.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1285: /* module 5 call 5 */
        switch (itemIdx) {
        case 0: /* proxy_kill_pure_V5 - spawner */;
            return _toStringAccountIdLookupOfT_V5(
                &m->basic.proxy_kill_pure_V5.spawner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_kill_pure_V5 - proxy_type */;
            return _toStringProxyType_V5(
                &m->basic.proxy_kill_pure_V5.proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_kill_pure_V5 - index */;
            return _toStringu16(
                &m->basic.proxy_kill_pure_V5.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* proxy_kill_pure_V5 - height */;
            return _toStringCompactu32(
                &m->basic.proxy_kill_pure_V5.height,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* proxy_kill_pure_V5 - ext_index */;
            return _toStringCompactu32(
                &m->basic.proxy_kill_pure_V5.ext_index,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1286: /* module 5 call 6 */
        switch (itemIdx) {
        case 0: /* proxy_announce_V5 - real */;
            return _toStringAccountIdLookupOfT_V5(
                &m->basic.proxy_announce_V5.real,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_announce_V5 - call_hash */;
            return _toStringCallHashOf_V5(
                &m->basic.proxy_announce_V5.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1287: /* module 5 call 7 */
        switch (itemIdx) {
        case 0: /* proxy_remove_announcement_V5 - real */;
            return _toStringAccountIdLookupOfT_V5(
                &m->basic.proxy_remove_announcement_V5.real,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_remove_announcement_V5 - call_hash */;
            return _toStringCallHashOf_V5(
                &m->basic.proxy_remove_announcement_V5.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1288: /* module 5 call 8 */
        switch (itemIdx) {
        case 0: /* proxy_reject_announcement_V5 - delegate */;
            return _toStringAccountIdLookupOfT_V5(
                &m->basic.proxy_reject_announcement_V5.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_reject_announcement_V5 - call_hash */;
            return _toStringCallHashOf_V5(
                &m->basic.proxy_reject_announcement_V5.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1289: /* module 5 call 9 */
        switch (itemIdx) {
        case 0: /* proxy_proxy_announced_V5 - delegate */;
            return _toStringAccountIdLookupOfT_V5(
                &m->basic.proxy_proxy_announced_V5.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_proxy_announced_V5 - real */;
            return _toStringAccountIdLookupOfT_V5(
                &m->basic.proxy_proxy_announced_V5.real,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_proxy_announced_V5 - force_proxy_type */;
            return _toStringOptionProxyType_V5(
                &m->basic.proxy_proxy_announced_V5.force_proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* proxy_proxy_announced_V5 - call */;
            return _toStringCall(
                &m->basic.proxy_proxy_announced_V5.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10241: /* module 40 call 1 */
        switch (itemIdx) {
        case 0: /* balances_set_balance_V5 - who */;
            return _toStringAccountIdLookupOfT_V5(
                &m->nested.balances_set_balance_V5.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_set_balance_V5 - new_free */;
            return _toStringCompactBalance(
                &m->nested.balances_set_balance_V5.new_free,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* balances_set_balance_V5 - new_reserved */;
            return _toStringCompactBalance(
                &m->nested.balances_set_balance_V5.new_reserved,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10245: /* module 40 call 5 */
        switch (itemIdx) {
        case 0: /* balances_force_unreserve_V5 - who */;
            return _toStringAccountIdLookupOfT_V5(
                &m->basic.balances_force_unreserve_V5.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_force_unreserve_V5 - amount */;
            return _toStringBalance(
                &m->basic.balances_force_unreserve_V5.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
#endif
    default:
        return parser_ok;
    }

    return parser_ok;
}

bool _getMethod_ItemIsExpert_V5(uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {

    default:
        return false;
    }
}

bool _getMethod_IsNestingSupported_V5(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 1281: // Proxy:Add proxy
    case 1282: // Proxy:Remove proxy
    case 1283: // Proxy:Remove proxies
    case 1284: // Proxy:Create pure
    case 1285: // Proxy:Kill pure
    case 1286: // Proxy:Announce
    case 1287: // Proxy:Remove announcement
    case 1288: // Proxy:Reject announcement
    case 1289: // Proxy:Proxy announced
    case 10244: // Balances:Transfer all
    case 10245: // Balances:Force unreserve
        return false;
    default:
        return true;
    }
}
