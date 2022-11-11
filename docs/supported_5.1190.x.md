# Khala 5.1190.x

## System

| Name                    | Nano S | Nano S XL          | Nano SP/X          | Nesting            | Arguments                         |
| ----------------------- | ------ | ------------------ | ------------------ | ------------------ | --------------------------------- |
| Fill block              |        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `Perbill`ratio<br/>               |
| Remark                  |        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `Vecu8`remark<br/>                |
| Set heap pages          |        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `u64`pages<br/>                   |
| Set code                |        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `Vecu8`code<br/>                  |
| Set code without checks |        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `Vecu8`code<br/>                  |
| Set storage             |        |                    |                    |                    | `VecKeyValue`items<br/>           |
| Kill storage            |        |                    |                    | :heavy_check_mark: | `VecKey`keys<br/>                 |
| Kill prefix             |        |                    |                    | :heavy_check_mark: | `Key`prefix<br/>`u32`subkeys<br/> |
| Remark with event       |        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `Vecu8`remark<br/>                |

## Timestamp

| Name | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments            |
| ---- | ------ | --------- | --------- | ------- | -------------------- |
| Set  |        |           |           |         | `Compactu64`now<br/> |

## Utility

| Name          | Nano S             | Nano S XL | Nano SP/X | Nesting | Arguments                                       |
| ------------- | ------------------ | --------- | --------- | ------- | ----------------------------------------------- |
| Batch         | :heavy_check_mark: |           |           |         | `VecCall`calls<br/>                             |
| As derivative |                    |           |           |         | `u16`index<br/>`Call`call<br/>                  |
| Batch all     | :heavy_check_mark: |           |           |         | `VecCall`calls<br/>                             |
| Dispatch as   |                    |           |           |         | `BoxPalletsOrigin`as_origin<br/>`Call`call<br/> |
| Force batch   | :heavy_check_mark: |           |           |         | `VecCall`calls<br/>                             |

## Multisig

| Name                 | Nano S | Nano S XL | Nano SP/X | Nesting            | Arguments                                                                                                                                                     |
| -------------------- | ------ | --------- | --------- | ------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| As multi threshold 1 |        |           |           | :heavy_check_mark: | `VecAccountId`other_signatories<br/>`Call`call<br/>                                                                                                           |
| As multi             |        |           |           | :heavy_check_mark: | `u16`threshold<br/>`VecAccountId`other_signatories<br/>`OptionTimepoint`maybe_timepoint<br/>`OpaqueCall`call<br/>`bool`store_call<br/>`Weight`max_weight<br/> |
| Approve as multi     |        |           |           | :heavy_check_mark: | `u16`threshold<br/>`VecAccountId`other_signatories<br/>`OptionTimepoint`maybe_timepoint<br/>`H256`call_hash<br/>`Weight`max_weight<br/>                       |
| Cancel as multi      |        |           |           | :heavy_check_mark: | `u16`threshold<br/>`VecAccountId`other_signatories<br/>`Timepoint`timepoint<br/>`H256`call_hash<br/>                                                          |

## Proxy

| Name                | Nano S | Nano S XL          | Nano SP/X          | Nesting            | Arguments                                                                                                                  |
| ------------------- | ------ | ------------------ | ------------------ | ------------------ | -------------------------------------------------------------------------------------------------------------------------- |
| Proxy               |        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `AccountIdLookupOfT`real<br/>`OptionProxyType`force_proxy_type<br/>`Call`call<br/>                                         |
| Add proxy           |        | :heavy_check_mark: | :heavy_check_mark: |                    | `AccountIdLookupOfT`delegate<br/>`ProxyType`proxy_type<br/>`BlockNumber`delay<br/>                                         |
| Remove proxy        |        | :heavy_check_mark: | :heavy_check_mark: |                    | `AccountIdLookupOfT`delegate<br/>`ProxyType`proxy_type<br/>`BlockNumber`delay<br/>                                         |
| Remove proxies      |        | :heavy_check_mark: | :heavy_check_mark: |                    |                                                                                                                            |
| Create pure         |        | :heavy_check_mark: | :heavy_check_mark: |                    | `ProxyType`proxy_type<br/>`BlockNumber`delay<br/>`u16`index<br/>                                                           |
| Kill pure           |        | :heavy_check_mark: | :heavy_check_mark: |                    | `AccountIdLookupOfT`spawner<br/>`ProxyType`proxy_type<br/>`u16`index<br/>`Compactu32`height<br/>`Compactu32`ext_index<br/> |
| Announce            |        | :heavy_check_mark: | :heavy_check_mark: |                    | `AccountIdLookupOfT`real<br/>`CallHashOf`call_hash<br/>                                                                    |
| Remove announcement |        | :heavy_check_mark: | :heavy_check_mark: |                    | `AccountIdLookupOfT`real<br/>`CallHashOf`call_hash<br/>                                                                    |
| Reject announcement |        | :heavy_check_mark: | :heavy_check_mark: |                    | `AccountIdLookupOfT`delegate<br/>`CallHashOf`call_hash<br/>                                                                |
| Proxy announced     |        | :heavy_check_mark: | :heavy_check_mark: |                    | `AccountIdLookupOfT`delegate<br/>`AccountIdLookupOfT`real<br/>`OptionProxyType`force_proxy_type<br/>`Call`call<br/>        |

## Vesting

| Name                  | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                |
| --------------------- | ------ | --------- | --------- | ------- | ---------------------------------------------------------------------------------------- |
| Vest                  |        |           |           |         |                                                                                          |
| Vest other            |        |           |           |         | `AccountIdLookupOfT`target<br/>                                                          |
| Vested transfer       |        |           |           |         | `AccountIdLookupOfT`target<br/>`VestingInfo`schedule<br/>                                |
| Force vested transfer |        |           |           |         | `AccountIdLookupOfT`source<br/>`AccountIdLookupOfT`target<br/>`VestingInfo`schedule<br/> |
| Merge schedules       |        |           |           |         | `u32`schedule1_index<br/>`u32`schedule2_index<br/>                                       |

## Scheduler

| Name                 | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                                                           |
| -------------------- | ------ | --------- | --------- | ------- | --------------------------------------------------------------------------------------------------------------------------------------------------- |
| Schedule             |        |           |           |         | `BlockNumber`when<br/>`OptionschedulePeriodBlockNumber`maybe_periodic<br/>`schedulePriority`priority<br/>`BoxCallOrHashOfT`call<br/>                |
| Cancel               |        |           |           |         | `BlockNumber`when<br/>`u32`index<br/>                                                                                                               |
| Schedule named       |        |           |           |         | `Vecu8`id<br/>`BlockNumber`when<br/>`OptionschedulePeriodBlockNumber`maybe_periodic<br/>`schedulePriority`priority<br/>`BoxCallOrHashOfT`call<br/>  |
| Cancel named         |        |           |           |         | `Vecu8`id<br/>                                                                                                                                      |
| Schedule after       |        |           |           |         | `BlockNumber`after<br/>`OptionschedulePeriodBlockNumber`maybe_periodic<br/>`schedulePriority`priority<br/>`BoxCallOrHashOfT`call<br/>               |
| Schedule named after |        |           |           |         | `Vecu8`id<br/>`BlockNumber`after<br/>`OptionschedulePeriodBlockNumber`maybe_periodic<br/>`schedulePriority`priority<br/>`BoxCallOrHashOfT`call<br/> |

## Preimage

| Name               | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments         |
| ------------------ | ------ | --------- | --------- | ------- | ----------------- |
| Note preimage      |        |           |           |         | `Vecu8`bytes<br/> |
| Unnote preimage    |        |           |           |         | `Hash`hash<br/>   |
| Request preimage   |        |           |           |         | `Hash`hash<br/>   |
| Unrequest preimage |        |           |           |         | `Hash`hash<br/>   |

## ParachainSystem

| Name                     | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                        |
| ------------------------ | ------ | --------- | --------- | ------- | -------------------------------- |
| Set validation data      |        |           |           |         | `ParachainInherentData`data<br/> |
| Sudo send upward message |        |           |           |         | `UpwardMessage`message<br/>      |
| Authorize upgrade        |        |           |           |         | `Hash`code_hash<br/>             |
| Enact authorized upgrade |        |           |           |         | `Vecu8`code<br/>                 |

## XcmpQueue

| Name                              | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                            |
| --------------------------------- | ------ | --------- | --------- | ------- | ---------------------------------------------------- |
| Service overweight                |        |           |           |         | `OverweightIndex`index<br/>`Weight`weight_limit<br/> |
| Suspend xcm execution             |        |           |           |         |                                                      |
| Resume xcm execution              |        |           |           |         |                                                      |
| Update suspend threshold          |        |           |           |         | `u32`new\_<br/>                                      |
| Update drop threshold             |        |           |           |         | `u32`new\_<br/>                                      |
| Update resume threshold           |        |           |           |         | `u32`new\_<br/>                                      |
| Update threshold weight           |        |           |           |         | `Weight`new\_<br/>                                   |
| Update weight restrict decay      |        |           |           |         | `Weight`new\_<br/>                                   |
| Update xcmp max individual weight |        |           |           |         | `Weight`new\_<br/>                                   |

## DmpQueue

| Name               | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                            |
| ------------------ | ------ | --------- | --------- | ------- | ---------------------------------------------------- |
| Service overweight |        |           |           |         | `OverweightIndex`index<br/>`Weight`weight_limit<br/> |

## PolkadotXcm

| Name                             | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                                                                                 |
| -------------------------------- | ------ | --------- | --------- | ------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Send                             |        |           |           |         | `BoxVersionedMultiLocation`dest<br/>`BoxVersionedXcmTuple`message<br/>                                                                                                    |
| Teleport assets                  |        |           |           |         | `BoxVersionedMultiLocation`dest<br/>`BoxVersionedMultiLocation`beneficiary<br/>`BoxVersionedMultiAssets`assets<br/>`u32`fee_asset_item<br/>                               |
| Reserve transfer assets          |        |           |           |         | `BoxVersionedMultiLocation`dest<br/>`BoxVersionedMultiLocation`beneficiary<br/>`BoxVersionedMultiAssets`assets<br/>`u32`fee_asset_item<br/>                               |
| Execute                          |        |           |           |         | `BoxVersionedXcmTasSysConfigRuntimeCall`message<br/>`Weight`max_weight<br/>                                                                                               |
| Force xcm version                |        |           |           |         | `BoxMultiLocation`location<br/>`XcmVersion`xcm_version<br/>                                                                                                               |
| Force default xcm version        |        |           |           |         | `OptionXcmVersion`maybe_xcm_version<br/>                                                                                                                                  |
| Force subscribe version notify   |        |           |           |         | `BoxVersionedMultiLocation`location<br/>                                                                                                                                  |
| Force unsubscribe version notify |        |           |           |         | `BoxVersionedMultiLocation`location<br/>                                                                                                                                  |
| Limited reserve transfer assets  |        |           |           |         | `BoxVersionedMultiLocation`dest<br/>`BoxVersionedMultiLocation`beneficiary<br/>`BoxVersionedMultiAssets`assets<br/>`u32`fee_asset_item<br/>`WeightLimit`weight_limit<br/> |
| Limited teleport assets          |        |           |           |         | `BoxVersionedMultiLocation`dest<br/>`BoxVersionedMultiLocation`beneficiary<br/>`BoxVersionedMultiAssets`assets<br/>`u32`fee_asset_item<br/>`WeightLimit`weight_limit<br/> |

## Balances

| Name                | Nano S             | Nano S XL          | Nano SP/X          | Nesting            | Arguments                                                                                  |
| ------------------- | ------------------ | ------------------ | ------------------ | ------------------ | ------------------------------------------------------------------------------------------ |
| Transfer            | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `AccountIdLookupOfT`dest<br/>`CompactBalance`amount<br/>                                   |
| Set balance         |                    | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `AccountIdLookupOfT`who<br/>`CompactBalance`new_free<br/>`CompactBalance`new_reserved<br/> |
| Force transfer      | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `AccountIdLookupOfT`source<br/>`AccountIdLookupOfT`dest<br/>`CompactBalance`amount<br/>    |
| Transfer keep alive | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `AccountIdLookupOfT`dest<br/>`CompactBalance`amount<br/>                                   |
| Transfer all        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |                    | `AccountIdLookupOfT`dest<br/>`bool`keep_alive<br/>                                         |
| Force unreserve     |                    | :heavy_check_mark: | :heavy_check_mark: |                    | `AccountIdLookupOfT`who<br/>`Balance`amount<br/>                                           |

## Authorship

| Name       | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                  |
| ---------- | ------ | --------- | --------- | ------- | -------------------------- |
| Set uncles |        |           |           |         | `VecHeader`new_uncles<br/> |

## CollatorSelection

| Name                   | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                |
| ---------------------- | ------ | --------- | --------- | ------- | ------------------------ |
| Set invulnerables      |        |           |           |         | `VecAccountId`new\_<br/> |
| Set desired candidates |        |           |           |         | `u32`max<br/>            |
| Set candidacy bond     |        |           |           |         | `Balance`bond<br/>       |
| Register as candidate  |        |           |           |         |                          |
| Leave intent           |        |           |           |         |                          |

## Session

| Name       | Nano S             | Nano S XL | Nano SP/X | Nesting | Arguments                        |
| ---------- | ------------------ | --------- | --------- | ------- | -------------------------------- |
| Set keys   | :heavy_check_mark: |           |           |         | `Keys`keys<br/>`Bytes`proof<br/> |
| Purge keys | :heavy_check_mark: |           |           |         |                                  |

## Identity

| Name              | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                       |
| ----------------- | ------ | --------- | --------- | ------- | --------------------------------------------------------------------------------------------------------------- |
| Add registrar     |        |           |           |         | `AccountIdLookupOfT`account<br/>                                                                                |
| Set identity      |        |           |           |         | `IdentityInfo`info<br/>                                                                                         |
| Set subs          |        |           |           |         | `VecTupleAccountIdData`subs<br/>                                                                                |
| Clear identity    |        |           |           |         |                                                                                                                 |
| Request judgement |        |           |           |         | `Compactu32`reg_index<br/>`Compactu128`max_fee<br/>                                                             |
| Cancel request    |        |           |           |         | `RegistrarIndex`reg_index<br/>                                                                                  |
| Set fee           |        |           |           |         | `Compactu32`index<br/>`Compactu128`fee<br/>                                                                     |
| Set account id    |        |           |           |         | `Compactu32`index<br/>`AccountIdLookupOfT`new\_<br/>                                                            |
| Set fields        |        |           |           |         | `Compactu32`index<br/>`IdentityFields`fields<br/>                                                               |
| Provide judgement |        |           |           |         | `Compactu32`reg_index<br/>`AccountIdLookupOfT`target<br/>`JudgementBalanceOfT`judgement<br/>`Hash`identity<br/> |
| Kill identity     |        |           |           |         | `AccountIdLookupOfT`target<br/>                                                                                 |
| Add sub           |        |           |           |         | `AccountIdLookupOfT`sub<br/>`Data`data<br/>                                                                     |
| Rename sub        |        |           |           |         | `AccountIdLookupOfT`sub<br/>`Data`data<br/>                                                                     |
| Remove sub        |        |           |           |         | `AccountIdLookupOfT`sub<br/>                                                                                    |
| Quit sub          |        |           |           |         |                                                                                                                 |

## Democracy

| Name                               | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                      |
| ---------------------------------- | ------ | --------- | --------- | ------- | ------------------------------------------------------------------------------ |
| Propose                            |        |           |           |         | `Hash`proposal_hash<br/>`CompactBalance`amount<br/>                            |
| Second                             |        |           |           |         | `Compactu32`proposal<br/>`Compactu32`seconds_upper_bound<br/>                  |
| Vote                               |        |           |           |         | `Compactu32`ref_index<br/>`AccountVote`vote<br/>                               |
| Emergency cancel                   |        |           |           |         | `ReferendumIndex`ref_index<br/>                                                |
| External propose                   |        |           |           |         | `Hash`proposal_hash<br/>                                                       |
| External propose majority          |        |           |           |         | `Hash`proposal_hash<br/>                                                       |
| External propose default           |        |           |           |         | `Hash`proposal_hash<br/>                                                       |
| Fast track                         |        |           |           |         | `Hash`proposal_hash<br/>`BlockNumber`voting_period<br/>`BlockNumber`delay<br/> |
| Veto external                      |        |           |           |         | `Hash`proposal_hash<br/>                                                       |
| Cancel referendum                  |        |           |           |         | `Compactu32`ref_index<br/>                                                     |
| Cancel queued                      |        |           |           |         | `ReferendumIndex`which<br/>                                                    |
| Delegate                           |        |           |           |         | `AccountIdLookupOfT`to<br/>`Conviction`conviction<br/>`Balance`balance<br/>    |
| Undelegate                         |        |           |           |         |                                                                                |
| Clear public proposals             |        |           |           |         |                                                                                |
| Note preimage                      |        |           |           |         | `Bytes`encoded_proposal<br/>                                                   |
| Note preimage operational          |        |           |           |         | `Bytes`encoded_proposal<br/>                                                   |
| Note imminent preimage             |        |           |           |         | `Bytes`encoded_proposal<br/>                                                   |
| Note imminent preimage operational |        |           |           |         | `Bytes`encoded_proposal<br/>                                                   |
| Reap preimage                      |        |           |           |         | `Hash`proposal_hash<br/>`Compactu32`proposal_len_upper_bound<br/>              |
| Unlock                             |        |           |           |         | `AccountIdLookupOfT`target<br/>                                                |
| Remove vote                        |        |           |           |         | `ReferendumIndex`index<br/>                                                    |
| Remove other vote                  |        |           |           |         | `AccountIdLookupOfT`target<br/>`ReferendumIndex`index<br/>                     |
| Enact proposal                     |        |           |           |         | `Hash`proposal_hash<br/>`ReferendumIndex`index<br/>                            |
| Blacklist                          |        |           |           |         | `Hash`proposal_hash<br/>`OptionReferendumIndex`maybe_ref_index<br/>            |
| Cancel proposal                    |        |           |           |         | `Compactu32`prop_index<br/>                                                    |

## Council

| Name                | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                         |
| ------------------- | ------ | --------- | --------- | ------- | ----------------------------------------------------------------------------------------------------------------- |
| Set members         |        |           |           |         | `VecAccountId`new_members<br/>`OptionAccountId`prime<br/>`MemberCount`old_count<br/>                              |
| Execute             |        |           |           |         | `Proposal`proposal<br/>`Compactu32`length_bound<br/>                                                              |
| Propose             |        |           |           |         | `Compactu32`threshold<br/>`Proposal`proposal<br/>`Compactu32`length_bound<br/>                                    |
| Vote                |        |           |           |         | `Hash`proposal<br/>`Compactu32`index<br/>`bool`approve<br/>                                                       |
| Close               |        |           |           |         | `Hash`proposal_hash<br/>`Compactu32`index<br/>`Compactu64`proposal_weight_bound<br/>`Compactu32`length_bound<br/> |
| Disapprove proposal |        |           |           |         | `Hash`proposal_hash<br/>                                                                                          |

## Treasury

| Name             | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                       |
| ---------------- | ------ | --------- | --------- | ------- | --------------------------------------------------------------- |
| Propose spend    |        |           |           |         | `CompactBalance`amount<br/>`AccountIdLookupOfT`beneficiary<br/> |
| Reject proposal  |        |           |           |         | `Compactu32`proposal_id<br/>                                    |
| Approve proposal |        |           |           |         | `Compactu32`proposal_id<br/>                                    |
| Spend            |        |           |           |         | `CompactBalance`amount<br/>`AccountIdLookupOfT`beneficiary<br/> |
| Remove approval  |        |           |           |         | `Compactu32`proposal_id<br/>                                    |

## Bounties

| Name                 | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                          |
| -------------------- | ------ | --------- | --------- | ------- | ---------------------------------------------------------------------------------- |
| Propose bounty       |        |           |           |         | `CompactBalance`amount<br/>`Bytes`description<br/>                                 |
| Approve bounty       |        |           |           |         | `Compactu32`bounty_id<br/>                                                         |
| Propose curator      |        |           |           |         | `Compactu32`bounty_id<br/>`AccountIdLookupOfT`curator<br/>`CompactBalance`fee<br/> |
| Unassign curator     |        |           |           |         | `Compactu32`bounty_id<br/>                                                         |
| Accept curator       |        |           |           |         | `Compactu32`bounty_id<br/>                                                         |
| Award bounty         |        |           |           |         | `Compactu32`bounty_id<br/>`AccountIdLookupOfT`beneficiary<br/>                     |
| Claim bounty         |        |           |           |         | `Compactu32`bounty_id<br/>                                                         |
| Close bounty         |        |           |           |         | `Compactu32`bounty_id<br/>                                                         |
| Extend bounty expiry |        |           |           |         | `Compactu32`bounty_id<br/>`Bytes`remark<br/>                                       |

## Lottery

| Name          | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                           |
| ------------- | ------ | --------- | --------- | ------- | ----------------------------------------------------------------------------------- |
| Buy ticket    |        |           |           |         | `Call`call<br/>                                                                     |
| Set calls     |        |           |           |         | `VecCall`calls<br/>                                                                 |
| Start lottery |        |           |           |         | `Balance`price<br/>`BlockNumber`length<br/>`BlockNumber`delay<br/>`bool`repeat<br/> |
| Stop repeat   |        |           |           |         |                                                                                     |

## TechnicalCommittee

| Name                | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                         |
| ------------------- | ------ | --------- | --------- | ------- | ----------------------------------------------------------------------------------------------------------------- |
| Set members         |        |           |           |         | `VecAccountId`new_members<br/>`OptionAccountId`prime<br/>`MemberCount`old_count<br/>                              |
| Execute             |        |           |           |         | `Proposal`proposal<br/>`Compactu32`length_bound<br/>                                                              |
| Propose             |        |           |           |         | `Compactu32`threshold<br/>`Proposal`proposal<br/>`Compactu32`length_bound<br/>                                    |
| Vote                |        |           |           |         | `Hash`proposal<br/>`Compactu32`index<br/>`bool`approve<br/>                                                       |
| Close               |        |           |           |         | `Hash`proposal_hash<br/>`Compactu32`index<br/>`Compactu64`proposal_weight_bound<br/>`Compactu32`length_bound<br/> |
| Disapprove proposal |        |           |           |         | `Hash`proposal_hash<br/>                                                                                          |

## TechnicalMembership

| Name          | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                   |
| ------------- | ------ | --------- | --------- | ------- | ----------------------------------------------------------- |
| Add member    |        |           |           |         | `AccountIdLookupOfT`who<br/>                                |
| Remove member |        |           |           |         | `AccountIdLookupOfT`who<br/>                                |
| Swap member   |        |           |           |         | `AccountIdLookupOfT`remove<br/>`AccountIdLookupOfT`add<br/> |
| Reset members |        |           |           |         | `VecAccountId`members<br/>                                  |
| Change key    |        |           |           |         | `AccountIdLookupOfT`new\_<br/>                              |
| Set prime     |        |           |           |         | `AccountIdLookupOfT`who<br/>                                |
| Clear prime   |        |           |           |         |                                                             |

## PhragmenElection

| Name                 | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                  |
| -------------------- | ------ | --------- | --------- | ------- | -------------------------------------------------------------------------- |
| Vote                 |        |           |           |         | `VecAccountId`votes<br/>`Compactu128`amount<br/>                           |
| Remove voter         |        |           |           |         |                                                                            |
| Submit candidacy     |        |           |           |         | `Compactu32`candidate_count<br/>                                           |
| Renounce candidacy   |        |           |           |         | `Renouncing`renouncing<br/>                                                |
| Remove member        |        |           |           |         | `AccountIdLookupOfT`who<br/>`bool`slash_bond<br/>`bool`rerun_election<br/> |
| Clean defunct voters |        |           |           |         | `u32`num_voters<br/>`u32`num_defunct<br/>                                  |

## Tips

| Name           | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                 |
| -------------- | ------ | --------- | --------- | ------- | ------------------------------------------------------------------------- |
| Report awesome |        |           |           |         | `Bytes`reason<br/>`AccountIdLookupOfT`who<br/>                            |
| Retract tip    |        |           |           |         | `Hash`hash<br/>                                                           |
| Tip new        |        |           |           |         | `Bytes`reason<br/>`AccountIdLookupOfT`who<br/>`Compactu128`tip_value<br/> |
| Tip            |        |           |           |         | `Hash`hash<br/>`Compactu128`tip_value<br/>                                |
| Close tip      |        |           |           |         | `Hash`hash<br/>                                                           |
| Slash tip      |        |           |           |         | `Hash`hash<br/>                                                           |

## ChildBounties

| Name               | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                                 |
| ------------------ | ------ | --------- | --------- | ------- | ------------------------------------------------------------------------------------------------------------------------- |
| Add child bounty   |        |           |           |         | `Compactu32`parent_bounty_id<br/>`CompactBalance`amount<br/>`Vecu8`description<br/>                                       |
| Propose curator    |        |           |           |         | `Compactu32`parent_bounty_id<br/>`Compactu32`child_bounty_id<br/>`AccountIdLookupOfT`curator<br/>`CompactBalance`fee<br/> |
| Accept curator     |        |           |           |         | `Compactu32`parent_bounty_id<br/>`Compactu32`child_bounty_id<br/>                                                         |
| Unassign curator   |        |           |           |         | `Compactu32`parent_bounty_id<br/>`Compactu32`child_bounty_id<br/>                                                         |
| Award child bounty |        |           |           |         | `Compactu32`parent_bounty_id<br/>`Compactu32`child_bounty_id<br/>`AccountIdLookupOfT`beneficiary<br/>                     |
| Claim child bounty |        |           |           |         | `Compactu32`parent_bounty_id<br/>`Compactu32`child_bounty_id<br/>                                                         |
| Close child bounty |        |           |           |         | `Compactu32`parent_bounty_id<br/>`Compactu32`child_bounty_id<br/>                                                         |

## ChainBridge

| Name                     | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                        |
| ------------------------ | ------ | --------- | --------- | ------- | ------------------------------------------------------------------------------------------------ |
| Set threshold            |        |           |           |         | `u32`threshold<br/>                                                                              |
| Whitelist chain          |        |           |           |         | `BridgeChainId`id<br/>                                                                           |
| Add relayer              |        |           |           |         | `AccountId`v<br/>                                                                                |
| Remove relayer           |        |           |           |         | `AccountId`v<br/>                                                                                |
| Update fee               |        |           |           |         | `u128`fee<br/>`BridgeChainId`dest_id<br/>                                                        |
| Acknowledge proposal     |        |           |           |         | `DepositNonce`nonce<br/>`BridgeChainId`src_id<br/>`H256`r_id<br/>`BoxTasConfigProposal`call<br/> |
| Reject proposal          |        |           |           |         | `DepositNonce`nonce<br/>`BridgeChainId`src_id<br/>`H256`r_id<br/>`BoxTasConfigProposal`call<br/> |
| Eval vote state          |        |           |           |         | `DepositNonce`nonce<br/>`BridgeChainId`src_id<br/>`BoxTasConfigProposal`prop<br/>                |
| Handle fungible transfer |        |           |           |         | `Vecu8`dest<br/>`Balance`amount<br/>`H256`rid<br/>                                               |

## XTransfer

| Name             | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                             |
| ---------------- | ------ | --------- | --------- | ------- | ------------------------------------------------------------------------------------- |
| Transfer         |        |           |           |         | `BoxMultiAsset`asset<br/>`BoxMultiLocation`dest<br/>`OptionXCMWeight`dest_weight<br/> |
| Transfer generic |        |           |           |         | `BoxVecu8`data<br/>`BoxMultiLocation`dest<br/>`OptionXCMWeight`dest_weight<br/>       |

## PhalaMq

| Name                      | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                  |
| ------------------------- | ------ | --------- | --------- | ------- | ------------------------------------------ |
| Sync offchain message     |        |           |           |         | `SignedMessage`signed_message<br/>         |
| Push message              |        |           |           |         | `Vecu8`destination<br/>`Vecu8`payload<br/> |
| Force push pallet message |        |           |           |         | `Vecu8`destination<br/>`Vecu8`payload<br/> |

## PhalaRegistry

| Name                                 | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                 |
| ------------------------------------ | ------ | --------- | --------- | ------- | ----------------------------------------------------------------------------------------- |
| Force set benchmark duration         |        |           |           |         | `u32`value<br/>                                                                           |
| Force register worker                |        |           |           |         | `WorkerPublicKey`pubkey<br/>`EcdhPublicKey`ecdh_pubkey<br/>`OptionAccountId`operator<br/> |
| Force register topic pubkey          |        |           |           |         | `Vecu8`topic<br/>`Vecu8`pubkey<br/>                                                       |
| Register gatekeeper                  |        |           |           |         | `WorkerPublicKey`gatekeeper<br/>                                                          |
| Unregister gatekeeper                |        |           |           |         | `WorkerPublicKey`gatekeeper<br/>                                                          |
| Rotate master key                    |        |           |           |         |                                                                                           |
| Register worker                      |        |           |           |         | `WorkerRegistrationInfoAccountId`pruntime_info<br/>`Attestation`attestation<br/>          |
| Update worker endpoint               |        |           |           |         | `WorkerEndpointPayload`endpoint_payload<br/>`Vecu8`signature<br/>                         |
| Add pruntime                         |        |           |           |         | `Vecu8`pruntime_hash<br/>                                                                 |
| Remove pruntime                      |        |           |           |         | `Vecu8`pruntime_hash<br/>                                                                 |
| Add relaychain genesis block hash    |        |           |           |         | `H256`genesis_block_hash<br/>                                                             |
| Remove relaychain genesis block hash |        |           |           |         | `H256`genesis_block_hash<br/>                                                             |
| Retire pruntime                      |        |           |           |         | `messagingRetireCondition`condition<br/>                                                  |
| Set pruntime consensus version       |        |           |           |         | `u32`version<br/>                                                                         |

## PhalaMining

| Name                     | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                |
| ------------------------ | ------ | --------- | --------- | ------- | ---------------------------------------- |
| Set cool down expiration |        |           |           |         | `u64`period<br/>                         |
| Unbind                   |        |           |           |         | `AccountId`miner<br/>                    |
| Force heartbeat          |        |           |           |         |                                          |
| Force start mining       |        |           |           |         | `AccountId`miner<br/>`Balance`stake<br/> |
| Force stop mining        |        |           |           |         | `AccountId`miner<br/>                    |
| Update tokenomic         |        |           |           |         | `TokenomicParams`new_params<br/>         |

## PhalaStakePool

| Name                         | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                    |
| ---------------------------- | ------ | --------- | --------- | ------- | ------------------------------------------------------------ |
| Create                       |        |           |           |         |                                                              |
| Add worker                   |        |           |           |         | `u64`pid<br/>`WorkerPublicKey`pubkey<br/>                    |
| Remove worker                |        |           |           |         | `u64`pid<br/>`WorkerPublicKey`worker<br/>                    |
| Set cap                      |        |           |           |         | `u64`pid<br/>`Balance`cap<br/>                               |
| Set payout pref              |        |           |           |         | `u64`pid<br/>`Permill`payout_commission<br/>                 |
| Add staker to whitelist      |        |           |           |         | `u64`pid<br/>`AccountId`staker<br/>                          |
| Set pool description         |        |           |           |         | `u64`pid<br/>`BoundedVecu8`description<br/>                  |
| Remove staker from whitelist |        |           |           |         | `u64`pid<br/>`AccountId`staker<br/>                          |
| Force assign reward          |        |           |           |         | `VecTupleu64BalanceOfT`reward_arr<br/>                       |
| Claim owner rewards          |        |           |           |         | `u64`pid<br/>`AccountId`target<br/>                          |
| Claim staker rewards         |        |           |           |         | `u64`pid<br/>`AccountId`target<br/>                          |
| Claim rewards                |        |           |           |         | `u64`pid<br/>`AccountId`target<br/>                          |
| Contribute                   |        |           |           |         | `u64`pid<br/>`Balance`amount<br/>                            |
| Withdraw                     |        |           |           |         | `u64`pid<br/>`Balance`shares<br/>                            |
| Start mining                 |        |           |           |         | `u64`pid<br/>`WorkerPublicKey`worker<br/>`Balance`stake<br/> |
| Stop mining                  |        |           |           |         | `u64`pid<br/>`WorkerPublicKey`worker<br/>                    |
| Reclaim pool worker          |        |           |           |         | `u64`pid<br/>`WorkerPublicKey`worker<br/>                    |
| Set mining enable            |        |           |           |         | `bool`enable<br/>                                            |
| Reconcile withdraw queue     |        |           |           |         | `u64`pid<br/>`AccountId`account<br/>                         |
| Restart mining               |        |           |           |         | `u64`pid<br/>`WorkerPublicKey`worker<br/>`Balance`stake<br/> |

## Assets

| Name                  | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                                                                                                                               |
| --------------------- | ------ | --------- | --------- | ------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Create                |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`admin<br/>`Balance`min_balance<br/>                                                                                                                                              |
| Force create          |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`owner<br/>`bool`is_sufficient<br/>`Compactu128`min_balance<br/>                                                                                                                  |
| Destroy               |        |           |           |         | `Compactu32`id<br/>`DestroyWitness`witness<br/>                                                                                                                                                                         |
| Mint                  |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`beneficiary<br/>`Compactu128`amount<br/>                                                                                                                                         |
| Burn                  |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`who<br/>`Compactu128`amount<br/>                                                                                                                                                 |
| Transfer              |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`target<br/>`Compactu128`amount<br/>                                                                                                                                              |
| Transfer keep alive   |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`target<br/>`Compactu128`amount<br/>                                                                                                                                              |
| Force transfer        |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`source<br/>`AccountIdLookupOfT`dest<br/>`Compactu128`amount<br/>                                                                                                                 |
| Freeze                |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`who<br/>                                                                                                                                                                         |
| Thaw                  |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`who<br/>                                                                                                                                                                         |
| Freeze asset          |        |           |           |         | `Compactu32`id<br/>                                                                                                                                                                                                     |
| Thaw asset            |        |           |           |         | `Compactu32`id<br/>                                                                                                                                                                                                     |
| Transfer ownership    |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`owner<br/>                                                                                                                                                                       |
| Set team              |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`issuer<br/>`AccountIdLookupOfT`admin<br/>`AccountIdLookupOfT`freezer<br/>                                                                                                        |
| Set metadata          |        |           |           |         | `Compactu32`id<br/>`Vecu8`name<br/>`Vecu8`symbol<br/>`u8`decimals<br/>                                                                                                                                                  |
| Clear metadata        |        |           |           |         | `Compactu32`id<br/>                                                                                                                                                                                                     |
| Force set metadata    |        |           |           |         | `Compactu32`id<br/>`Vecu8`name<br/>`Vecu8`symbol<br/>`u8`decimals<br/>`bool`is_frozen<br/>                                                                                                                              |
| Force clear metadata  |        |           |           |         | `Compactu32`id<br/>                                                                                                                                                                                                     |
| Force asset status    |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`owner<br/>`AccountIdLookupOfT`issuer<br/>`AccountIdLookupOfT`admin<br/>`AccountIdLookupOfT`freezer<br/>`Compactu128`min_balance<br/>`bool`is_sufficient<br/>`bool`is_frozen<br/> |
| Approve transfer      |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`delegate<br/>`Compactu128`amount<br/>                                                                                                                                            |
| Cancel approval       |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`delegate<br/>                                                                                                                                                                    |
| Force cancel approval |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`owner<br/>`AccountIdLookupOfT`delegate<br/>                                                                                                                                      |
| Transfer approved     |        |           |           |         | `Compactu32`id<br/>`AccountIdLookupOfT`owner<br/>`AccountIdLookupOfT`destination<br/>`Compactu128`amount<br/>                                                                                                           |
| Touch                 |        |           |           |         | `Compactu32`id<br/>                                                                                                                                                                                                     |
| Refund                |        |           |           |         | `Compactu32`id<br/>`bool`allow_burn<br/>                                                                                                                                                                                |

## AssetsRegistry

| Name                      | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                   |
| ------------------------- | ------ | --------- | --------- | ------- | ------------------------------------------------------------------------------------------- |
| Force withdraw fund       |        |           |           |         | `OptionAssetId`asset_id<br/>`AccountId`recipient<br/>`u128`amount<br/>                      |
| Force register asset      |        |           |           |         | `MultiLocation`location<br/>`AssetId`asset_id<br/>`AssetProperties`properties<br/>          |
| Force unregister asset    |        |           |           |         | `AssetId`asset_id<br/>                                                                      |
| Force set metadata        |        |           |           |         | `AssetId`asset_id<br/>`AssetProperties`properties<br/>                                      |
| Force mint                |        |           |           |         | `AssetId`asset_id<br/>`AccountId`beneficiary<br/>`Taspallet_assetsConfigBalance`amount<br/> |
| Force burn                |        |           |           |         | `AssetId`asset_id<br/>`AccountId`who<br/>`Taspallet_assetsConfigBalance`amount<br/>         |
| Force set price           |        |           |           |         | `AssetId`asset_id<br/>`u128`execution_price<br/>                                            |
| Force set location        |        |           |           |         | `AssetId`asset_id<br/>`MultiLocation`location<br/>                                          |
| Force enable chainbridge  |        |           |           |         | `AssetId`asset_id<br/>`u8`chain_id<br/>`bool`is_mintable<br/>`BoxVecu8`metadata<br/>        |
| Force disable chainbridge |        |           |           |         | `AssetId`asset_id<br/>`u8`chain_id<br/>                                                     |

## Uniques

| Name                      | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                                                                                                           |
| ------------------------- | ------ | --------- | --------- | ------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Create                    |        |           |           |         | `CollectionId`collection<br/>`AccountIdLookupOfT`admin<br/>                                                                                                                                         |
| Force create              |        |           |           |         | `CollectionId`collection<br/>`AccountIdLookupOfT`owner<br/>`bool`free_holding<br/>                                                                                                                  |
| Destroy                   |        |           |           |         | `CollectionId`collection<br/>`DestroyWitness`witness<br/>                                                                                                                                           |
| Mint                      |        |           |           |         | `CollectionId`collection<br/>`ItemId`item<br/>`AccountIdLookupOfT`owner<br/>                                                                                                                        |
| Burn                      |        |           |           |         | `CollectionId`collection<br/>`ItemId`item<br/>`OptionAccountIdLookupOfT`check_owner<br/>                                                                                                            |
| Transfer                  |        |           |           |         | `CollectionId`collection<br/>`ItemId`item<br/>`AccountIdLookupOfT`dest<br/>                                                                                                                         |
| Redeposit                 |        |           |           |         | `CollectionId`collection<br/>`VecItemId`items<br/>                                                                                                                                                  |
| Freeze                    |        |           |           |         | `CollectionId`collection<br/>`ItemId`item<br/>                                                                                                                                                      |
| Thaw                      |        |           |           |         | `CollectionId`collection<br/>`ItemId`item<br/>                                                                                                                                                      |
| Freeze collection         |        |           |           |         | `CollectionId`collection<br/>                                                                                                                                                                       |
| Thaw collection           |        |           |           |         | `CollectionId`collection<br/>                                                                                                                                                                       |
| Transfer ownership        |        |           |           |         | `CollectionId`collection<br/>`AccountIdLookupOfT`owner<br/>                                                                                                                                         |
| Set team                  |        |           |           |         | `CollectionId`collection<br/>`AccountIdLookupOfT`issuer<br/>`AccountIdLookupOfT`admin<br/>`AccountIdLookupOfT`freezer<br/>                                                                          |
| Approve transfer          |        |           |           |         | `CollectionId`collection<br/>`ItemId`item<br/>`AccountIdLookupOfT`delegate<br/>                                                                                                                     |
| Cancel approval           |        |           |           |         | `CollectionId`collection<br/>`ItemId`item<br/>`OptionAccountIdLookupOfT`maybe_check_delegate<br/>                                                                                                   |
| Force item status         |        |           |           |         | `CollectionId`collection<br/>`AccountIdLookupOfT`owner<br/>`AccountIdLookupOfT`issuer<br/>`AccountIdLookupOfT`admin<br/>`AccountIdLookupOfT`freezer<br/>`bool`free_holding<br/>`bool`is_frozen<br/> |
| Set attribute             |        |           |           |         | `CollectionId`collection<br/>`OptionItemId`maybe_item<br/>`BoundedVecu8`key<br/>`BoundedVecu8`value<br/>                                                                                            |
| Clear attribute           |        |           |           |         | `CollectionId`collection<br/>`OptionItemId`maybe_item<br/>`BoundedVecu8`key<br/>                                                                                                                    |
| Set metadata              |        |           |           |         | `CollectionId`collection<br/>`ItemId`item<br/>`BoundedVecu8`data<br/>`bool`is_frozen<br/>                                                                                                           |
| Clear metadata            |        |           |           |         | `CollectionId`collection<br/>`ItemId`item<br/>                                                                                                                                                      |
| Set collection metadata   |        |           |           |         | `CollectionId`collection<br/>`BoundedVecu8`data<br/>`bool`is_frozen<br/>                                                                                                                            |
| Clear collection metadata |        |           |           |         | `CollectionId`collection<br/>                                                                                                                                                                       |
| Set accept ownership      |        |           |           |         | `OptionCollectionId`maybe_collection<br/>                                                                                                                                                           |
| Set collection max supply |        |           |           |         | `CollectionId`collection<br/>`u32`max_supply<br/>                                                                                                                                                   |
| Set price                 |        |           |           |         | `CollectionId`collection<br/>`ItemId`item<br/>`OptionItemPrice`price<br/>`OptionAccountIdLookupOfT`whitelisted_buyer<br/>                                                                           |
| Buy item                  |        |           |           |         | `CollectionId`collection<br/>`ItemId`item<br/>`ItemPrice`bid_price<br/>                                                                                                                             |

## RmrkCore

| Name                     | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                                                                                                                                                           |
| ------------------------ | ------ | --------- | --------- | ------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Mint nft                 |        |           |           |         | `OptionAccountId`owner<br/>`NftId`nft_id<br/>`CollectionId`collection_id<br/>`OptionAccountId`royalty_recipient<br/>`OptionPermill`royalty<br/>`BoundedVecu8`metadata<br/>`bool`transferable<br/>`OptionBoundedResourceInfoTypeOfT`resources<br/>   |
| Mint nft directly to nft |        |           |           |         | `CollectionIdNftId`owner<br/>`NftId`nft_id<br/>`CollectionId`collection_id<br/>`OptionAccountId`royalty_recipient<br/>`OptionPermill`royalty<br/>`BoundedVecu8`metadata<br/>`bool`transferable<br/>`OptionBoundedResourceInfoTypeOfT`resources<br/> |
| Create collection        |        |           |           |         | `BoundedVecu8`metadata<br/>`Optionu32`max<br/>`BoundedCollectionSymbolOfT`symbol<br/>                                                                                                                                                               |
| Burn nft                 |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`u32`max_burns<br/>                                                                                                                                                                               |
| Destroy collection       |        |           |           |         | `CollectionId`collection_id<br/>                                                                                                                                                                                                                    |
| Send                     |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`AccountIdOrCollectionNftTupleAccountId`new_owner<br/>                                                                                                                                            |
| Accept nft               |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`AccountIdOrCollectionNftTupleAccountId`new_owner<br/>                                                                                                                                            |
| Reject nft               |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>                                                                                                                                                                                                  |
| Change collection issuer |        |           |           |         | `CollectionId`collection_id<br/>`LookupasStaticLookupSource`new_issuer<br/>                                                                                                                                                                         |
| Set property             |        |           |           |         | `Compactu32`collection_id<br/>`OptionNftId`maybe_nft_id<br/>`KeyLimitOfT`key<br/>`ValueLimitOfT`value<br/>                                                                                                                                          |
| Lock collection          |        |           |           |         | `CollectionId`collection_id<br/>                                                                                                                                                                                                                    |
| Add basic resource       |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`BasicResourceStringLimitOfT`resource<br/>`H256`resource_id<br/>                                                                                                                                  |
| Add composable resource  |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`ComposableResourceStringLimitOfTBoundedVecPartIdPartsLimit`resource<br/>`H256`resource_id<br/>                                                                                                   |
| Add slot resource        |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`SlotResourceStringLimitOfT`resource<br/>`H256`resource_id<br/>                                                                                                                                   |
| Accept resource          |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`H256`resource_id<br/>                                                                                                                                                                            |
| Remove resource          |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`H256`resource_id<br/>                                                                                                                                                                            |
| Accept resource removal  |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`H256`resource_id<br/>                                                                                                                                                                            |
| Set priority             |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`BoundedVecResourceIdMaxPriorities`priorities<br/>                                                                                                                                                |

## RmrkEquip

| Name               | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                                                                        |
| ------------------ | ------ | --------- | --------- | ------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Change base issuer |        |           |           |         | `BaseId`base_id<br/>`LookupasStaticLookupSource`new_issuer<br/>                                                                                                  |
| Equip              |        |           |           |         | `CollectionIdNftId`item<br/>`CollectionIdNftId`equipper<br/>`H256`resource_id<br/>`BaseId`base<br/>`SlotId`slot<br/>                                             |
| Unequip            |        |           |           |         | `CollectionIdNftId`item<br/>`CollectionIdNftId`unequipper<br/>`BaseId`base<br/>`SlotId`slot<br/>                                                                 |
| Equippable         |        |           |           |         | `BaseId`base_id<br/>`SlotId`slot_id<br/>`EquippableListBoundedVecCollectionIdMaxCollectionsEquippablePerPart`equippables<br/>                                    |
| Theme add          |        |           |           |         | `BaseId`base_id<br/>`BoundedThemeOfT`theme<br/>                                                                                                                  |
| Create base        |        |           |           |         | `BoundedVecu8`base_type<br/>`BoundedVecu8`symbol<br/>`BoundedVecPartTypeStringLimitOfTBoundedVecCollectionIdMaxCollectionsEquippablePerPartPartsLimit`parts<br/> |

## RmrkMarket

| Name           | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                             |
| -------------- | ------ | --------- | --------- | ------- | ----------------------------------------------------------------------------------------------------- |
| Buy            |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`OptionBalance`amount<br/>                          |
| List           |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`Balance`amount<br/>`OptionBlockNumber`expires<br/> |
| Unlist         |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>                                                    |
| Make offer     |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`Balance`amount<br/>`OptionBlockNumber`expires<br/> |
| Withdraw offer |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>                                                    |
| Accept offer   |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`AccountId`offerer<br/>                             |

## PWNftSale

| Name                              | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                                  |
| --------------------------------- | ------ | --------- | --------- | ------- | -------------------------------------------------------------------------------------------------------------------------- |
| Claim spirit                      |        |           |           |         |                                                                                                                            |
| Redeem spirit                     |        |           |           |         | `sr25519Signature`signature<br/>                                                                                           |
| Buy rare origin of shell          |        |           |           |         | `RarityType`rarity_type<br/>`RaceType`race<br/>`CareerType`career<br/>                                                     |
| Buy prime origin of shell         |        |           |           |         | `sr25519Signature`signature<br/>`RaceType`race<br/>`CareerType`career<br/>                                                 |
| Preorder origin of shell          |        |           |           |         | `RaceType`race<br/>`CareerType`career<br/>                                                                                 |
| Mint chosen preorders             |        |           |           |         | `VecPreorderId`preorders<br/>                                                                                              |
| Refund not chosen preorders       |        |           |           |         | `VecPreorderId`preorders<br/>                                                                                              |
| Mint gift origin of shell         |        |           |           |         | `AccountId`owner<br/>`RarityType`rarity_type<br/>`RaceType`race<br/>`CareerType`career<br/>`NftSaleType`nft_sale_type<br/> |
| Set overlord                      |        |           |           |         | `AccountId`new_overlord<br/>                                                                                               |
| Initialize world clock            |        |           |           |         |                                                                                                                            |
| Set status type                   |        |           |           |         | `bool`status<br/>`StatusType`status_type<br/>                                                                              |
| Init rarity type counts           |        |           |           |         |                                                                                                                            |
| Update rarity type counts         |        |           |           |         | `RarityType`rarity_type<br/>`u32`for_sale_count<br/>`u32`giveaway_count<br/>                                               |
| Set spirit collection id          |        |           |           |         | `CollectionId`collection_id<br/>                                                                                           |
| Set origin of shell collection id |        |           |           |         | `CollectionId`collection_id<br/>                                                                                           |
| Pw create collection              |        |           |           |         | `BoundedVecu8`metadata<br/>`Optionu32`max<br/>`BoundedCollectionSymbolOfT`symbol<br/>                                      |
| Set spirits metadata              |        |           |           |         | `BoundedVecu8`spirits_metadata<br/>                                                                                        |
| Set origin of shells metadata     |        |           |           |         | `VecTupleRaceTypeBoundedVecu8StringLimit`origin_of_shells_metadata<br/>                                                    |
| Set payee                         |        |           |           |         | `AccountId`new_payee<br/>                                                                                                  |

## PWIncubation

| Name                             | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                   |
| -------------------------------- | ------ | --------- | --------- | ------- | ------------------------------------------------------------------------------------------- |
| Start incubation                 |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>                                          |
| Feed origin of shell             |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>                                          |
| Hatch origin of shell            |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`BoundedVecu8`default_shell_metadata<br/> |
| Set can start incubation status  |        |           |           |         | `bool`status<br/>                                                                           |
| Set shell collection id          |        |           |           |         | `CollectionId`collection_id<br/>                                                            |
| Set shell parts collection id    |        |           |           |         | `CollectionId`collection_id<br/>                                                            |
| Set origin of shell chosen parts |        |           |           |         | `CollectionId`collection_id<br/>`NftId`nft_id<br/>`ShellPartsOfT`chosen_parts<br/>          |
