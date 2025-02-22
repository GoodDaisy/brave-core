/* Copyright (c) 2021 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/. */

#include "brave/components/brave_ads/core/internal/serving/permission_rules/permission_rules.h"

#include "brave/components/brave_ads/core/internal/ad_units/inline_content_ad/inline_content_ad_feature.h"
#include "brave/components/brave_ads/core/internal/common/unittest/unittest_base.h"
#include "brave/components/brave_ads/core/internal/user_engagement/ad_events/ad_event_unittest_util.h"

// npm run test -- brave_unit_tests --filter=BraveAds*

namespace brave_ads {

class BraveAdsInlineContentAdsPerHourPermissionRuleTest : public UnitTestBase {
};

TEST_F(BraveAdsInlineContentAdsPerHourPermissionRuleTest,
       ShouldAllowIfThereAreNoAdEvents) {
  // Act & Assert
  EXPECT_TRUE(HasInlineContentAdsPerHourPermission());
}

TEST_F(BraveAdsInlineContentAdsPerHourPermissionRuleTest,
       ShouldAllowIfDoesNotExceedCap) {
  // Arrange
  test::RecordAdEvents(AdType::kInlineContentAd, ConfirmationType::kServed,
                       /*count=*/kMaximumInlineContentAdsPerHour.Get() - 1);

  // Act & Assert
  EXPECT_TRUE(HasInlineContentAdsPerHourPermission());
}

TEST_F(BraveAdsInlineContentAdsPerHourPermissionRuleTest,
       ShouldAllowIfDoesNotExceedCapAfter1Hour) {
  // Arrange
  test::RecordAdEvents(AdType::kInlineContentAd, ConfirmationType::kServed,
                       /*count=*/kMaximumInlineContentAdsPerHour.Get());

  AdvanceClockBy(base::Hours(1));

  // Act & Assert
  EXPECT_TRUE(HasInlineContentAdsPerHourPermission());
}

TEST_F(BraveAdsInlineContentAdsPerHourPermissionRuleTest,
       ShouldNotAllowIfExceedsCapWithin1Hour) {
  // Arrange
  test::RecordAdEvents(AdType::kInlineContentAd, ConfirmationType::kServed,
                       /*count=*/kMaximumInlineContentAdsPerHour.Get());

  AdvanceClockBy(base::Hours(1) - base::Milliseconds(1));

  // Act & Assert
  EXPECT_FALSE(HasInlineContentAdsPerHourPermission());
}

}  // namespace brave_ads
