/* Copyright (c) 2022 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_COMPONENTS_BRAVE_ADS_CORE_INTERNAL_AD_UNITS_AD_UNITTEST_UTIL_H_
#define BRAVE_COMPONENTS_BRAVE_ADS_CORE_INTERNAL_AD_UNITS_AD_UNITTEST_UTIL_H_

#include <string>

#include "brave/components/brave_ads/core/public/ad_units/ad_type.h"

namespace brave_ads {

struct AdInfo;

namespace test {

std::string GetConstantId(bool should_use_random_uuids,
                          const std::string& constant_id);

AdInfo BuildAd(AdType ad_type, bool should_use_random_uuids);

}  // namespace test

}  // namespace brave_ads

#endif  // BRAVE_COMPONENTS_BRAVE_ADS_CORE_INTERNAL_AD_UNITS_AD_UNITTEST_UTIL_H_
