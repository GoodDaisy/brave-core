/* Copyright (c) 2023 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/. */

#include "brave/components/brave_ads/core/internal/account/confirmations/confirmations_feature.h"

#include "base/test/scoped_feature_list.h"
#include "testing/gtest/include/gtest/gtest.h"

// npm run test -- brave_unit_tests --filter=BraveAds*

namespace brave_ads {

TEST(BraveAdsConfirmationsFeatureTest, IsEnabled) {
  // Act & Assert
  EXPECT_TRUE(base::FeatureList::IsEnabled(kConfirmationsFeature));
}

TEST(BraveAdsConfirmationsFeatureTest, IsDisabled) {
  // Arrange
  base::test::ScopedFeatureList scoped_feature_list;
  scoped_feature_list.InitAndDisableFeature(kConfirmationsFeature);

  // Act & Assert
  EXPECT_FALSE(base::FeatureList::IsEnabled(kConfirmationsFeature));
}

TEST(BraveAdsConfirmationsFeatureTest, ProcessConfirmationAfter) {
  // Arrange
  base::test::ScopedFeatureList scoped_feature_list;
  scoped_feature_list.InitAndEnableFeatureWithParameters(
      kConfirmationsFeature, {{"process_after", "3h"}});

  // Act & Assert
  EXPECT_EQ(base::Hours(3), kProcessConfirmationAfter.Get());
}

TEST(BraveAdsConfirmationsFeatureTest, DefaultProcessConfirmationAfter) {
  // Act & Assert
  EXPECT_EQ(base::Seconds(15), kProcessConfirmationAfter.Get());
}

TEST(BraveAdsConfirmationsFeatureTest,
     DefaultProcessConfirmationAfterWhenDisabled) {
  // Arrange
  base::test::ScopedFeatureList scoped_feature_list;

  // Act & Assert
  EXPECT_EQ(base::Seconds(15), kProcessConfirmationAfter.Get());
}

}  // namespace brave_ads
