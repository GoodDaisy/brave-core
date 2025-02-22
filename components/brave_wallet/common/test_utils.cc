/* Copyright (c) 2022 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/. */

#include "brave/components/brave_wallet/common/test_utils.h"

#include "base/strings/stringprintf.h"
#include "brave/components/brave_wallet/common/common_utils.h"
#include "brave/components/brave_wallet/common/value_conversion_utils.h"

namespace brave_wallet {

bool AllCoinsTested() {
  // Change hardcoded value here only when all failed callers have adequate
  // testing for newly added coin.
  return 4 == std::size(kAllCoins);
}

mojom::NetworkInfo GetTestNetworkInfo1(const std::string& chain_id,
                                       mojom::CoinType coin) {
  return {chain_id,
          "chain_name",
          {"https://url1.com"},
          {"https://url1.com"},
          0,
          {GURL("https://url1.com")},
          "symbol",
          "symbol_name",
          11,
          coin,
          GetSupportedKeyringsForNetwork(coin, chain_id),
          false};
}

mojom::NetworkInfo GetTestNetworkInfo2(const std::string& chain_id,
                                       mojom::CoinType coin) {
  return {chain_id,
          "chain_name2",
          {"https://url2.com"},
          {"https://url2.com"},
          0,
          {GURL("https://url2.com")},
          "symbol2",
          "symbol_name2",
          22,
          coin,
          GetSupportedKeyringsForNetwork(coin, chain_id),
          true};
}

namespace mojom {
void PrintTo(const BitcoinAddressPtr& address, ::std::ostream* os) {
  *os << base::StringPrintf("[%s %d/%d]", address->address_string.c_str(),
                            address->key_id->change, address->key_id->index);
}
void PrintTo(const BlockchainTokenPtr& token, ::std::ostream* os) {
  *os << BlockchainTokenToValue(token).DebugString();
}
}  // namespace mojom

}  // namespace brave_wallet
