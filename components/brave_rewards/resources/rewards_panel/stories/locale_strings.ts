/* Copyright (c) 2022 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/. */

import { localeStrings as walletCardStrings } from '../../shared/components/wallet_card/stories/locale_strings'
import { localeStrings as onboardingStrings } from '../../shared/components/onboarding/stories/locale_strings'

export const localeStrings = {
  ...walletCardStrings,
  ...onboardingStrings,

  connectAccount: 'Connect account',
  connectAccountText: '$1Ready to start earning?$2 Connect or create an account with one of our partners.',
  connectAccountNoProviders: 'To earn BAT, users must connect a custodial account to Brave Rewards. Unfortunately, there\'s no custodian available in your region, so earning isn\'t available. For now, turning on Brave Rewards will automatically support creators.',
  connectContributeHeader: 'Send contributions with Brave Rewards',
  connectContributeText: 'You\'ll be able to send on-demand contributions to your favorite creators with your Brave Rewards balance once you have a custodial account connected.',
  connectContributeNoProviders: 'To send on-demand contributions, users must connect a custodial account to Brave Rewards. Unfortunately, there’s no custodian available in your region, so sending isn’t available. In the meantime, you’re still automatically supporting creators.',
  learnMore: 'Learn more',
  publisherCountText: 'This month, you\'ve visited $1 creators supported by Brave Rewards',
  headerTitle: 'Brave Rewards',
  headerText: 'You are helping support content creators',
  rewardsSettings: 'Rewards settings',
  learnMoreAboutBAT: 'Learn more about earning BAT',
  summary: 'Summary',
  tip: 'Contribute',
  unverifiedCreator: 'Unverified Creator',
  verifiedCreator: 'Verified Creator',
  refreshStatus: 'Refresh creator verification status',
  unverifiedText: 'This creator is not yet verified with Brave Creators. You\'ll be able to send them contributions once they\'re verified.',
  platformPublisherTitle: '$1 on $2',
  attention: 'Attention',
  sendTip: 'Send Contribution',
  includeInAutoContribute: 'Include in Auto-Contribute',
  monthlyTip: 'Monthly Contribution',
  ok: 'OK',
  set: 'Set',
  changeAmount: 'Change amount',
  cancel: 'Cancel',

  grantCaptchaTitle: 'Confirm you are a human being',
  grantCaptchaFailedTitle: 'Hmm… Not Quite. Try Again.',
  grantCaptchaHint: 'Drag the BAT icon onto the $1 target.',
  grantCaptchaPassedTitleUGP: 'It’s your lucky day!',
  grantCaptchaPassedTextUGP: 'Your token grant is on its way.',
  grantCaptchaAmountUGP: 'Free Token Grant',
  grantCaptchaPassedTitleAds: 'You\'ve earned an Ads Reward!',
  grantCaptchaPassedTextAds: 'Your Reward is on its way.',
  grantCaptchaAmountAds: 'Your Reward Amount',
  grantCaptchaExpiration: 'Grant Expiration Date',
  grantCaptchaErrorTitle: 'Oops, something is wrong.',
  grantCaptchaErrorText: 'Brave Rewards is having an issue. Please try again later.',

  captchaSolvedTitle: 'Solved!',
  captchaSolvedText: 'Ads and earnings will now resume. Thanks for helping us protect Brave Rewards and privacy-based ads.',
  captchaDismiss: 'Dismiss',
  captchaMaxAttemptsExceededTitle: 'Max attempts exceeded',
  captchaMaxAttemptsExceededText: 'Looks like this is not working, Brave ads will remain paused. Contact us if you need help with the captcha.',
  captchaContactSupport: 'Contact support',

  notificationClaimRewards: 'Claim Rewards',
  notificationClaimTokens: 'Claim Tokens',
  notificationAutoContributeCompletedTitle: 'Auto-Contribute',
  notificationAutoContributeCompletedText: 'You\'ve contributed $1.',
  notificationWalletDisconnectedAction: 'Log in again',
  notificationWalletDisconnectedTitle: 'You are logged out',
  notificationWalletDisconnectedText: 'This happens from time to time to keep your $1 account secure. While logged out, you will continue to receive payouts, but won\'t be able to see your balance or send contributions from your $1 account.',
  notificationUpholdBATNotAllowedTitle: 'Error: BAT unavailable',
  notificationUpholdBATNotAllowedText: 'BAT is not yet supported in your region on Uphold.',
  notificationUpholdInsufficientCapabilitiesTitle: 'Error: Limited Uphold account functionality',
  notificationUpholdInsufficientCapabilitiesText: 'According to Uphold, there are currently some limitations on your Uphold account. Please log in to your Uphold account and check whether there are any notices or remaining account requirements to complete, then try again.',
  notificationTokenGrantTitle: 'A token grant is available!',
  notificationAdGrantAmount: '$1 Rewards: $2',
  notificationAdGrantTitle: 'Your $1 Ad Rewards are here!',
  notificationGrantDaysRemaining: 'You have $1 left to claim',
  notificationMonthlyContributionFailedText: 'There was a problem processing your contribution.',
  notificationMonthlyContributionFailedTitle: 'Monthly contribution failed',
  notificationMonthlyTipCompletedTitle: 'Contributions',
  notificationMonthlyTipCompletedText: 'Your monthly contributions have been processed.',
  notificationPublisherVerifiedTitle: 'Pending contribution',
  notificationPublisherVerifiedText: 'Creator $1 recently verified.',

  rewardsConnectAccount: 'Connect account',
  rewardsNotNow: 'Not now',
  rewardsSelfCustodyInviteHeader: 'Receive BAT directly to a self-custody crypto address',
  rewardsSelfCustodyInviteText: 'We’ve added a new option for paying out monthly BAT rewards. Connect a custodial account, or a self-custody wallet to receive Rewards.',
  rewardsVBATNoticeTitle1: 'Action required: Connect a custodial account or your vBAT will be lost',
  rewardsVBATNoticeText1: 'On $1, we will be discontinuing support for existing virtual BAT balances. Connect a custodial account before this date so we can transfer your earned balance to your custodial account, otherwise your balance will be lost.',
  rewardsVBATNoticeTitle2: 'You still have time to contribute your vBAT to your favorite creators',
  rewardsVBATNoticeText2: 'On $1, we will be discontinuing support for existing virtual BAT balances. Unfortunately, there are no available custodians in your region ($2) to withdraw your earnings. Until then, you can still contribute to your favorite creators.'
}
