//
//  INCallRecordTypeOptionsResolutionResult.h
//  Intents
//
//  Copyright (c) 2016-2017 Apple Inc. All rights reserved.
//

#import <Intents/INIntentResolutionResult.h>

#import <Intents/INCallRecordTypeOptions.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(11.0), watchos(4.0), macosx(10.13))
@interface INCallRecordTypeOptionsResolutionResult : INIntentResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed, with a given INCallRecordTypeOptions. The resolvedValue can be different than the original INCallRecordTypeOptions. This allows app extensions to apply business logic constraints.
// Use +notRequired to continue with a 'nil' value.
+ (instancetype)successWithResolvedCallRecordTypeOptions:(INCallRecordTypeOptions)resolvedCallRecordTypeOptions NS_SWIFT_NAME(success(with:));

+ (instancetype)successWithResolvedValue:(INCallRecordTypeOptions)resolvedValue NS_SWIFT_UNAVAILABLE("Please use 'success(with:)' instead.") API_DEPRECATED_WITH_REPLACEMENT("+successWithResolvedCallRecordTypeOptions:", ios(10.0, 11.0), watchos(3.2, 4.0), macos(10.12, 10.13));

// This resolution result is to ask Siri to confirm if this is the value with which the user wants to continue.
+ (instancetype)confirmationRequiredWithCallRecordTypeOptionsToConfirm:(INCallRecordTypeOptions)callRecordTypeOptionsToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

+ (instancetype)confirmationRequiredWithValueToConfirm:(INCallRecordTypeOptions)valueToConfirm NS_SWIFT_UNAVAILABLE("Please use 'confirmationRequired(with:)' instead.") API_DEPRECATED_WITH_REPLACEMENT("+confirmationRequiredWithCallRecordTypeOptionsToConfirm:", ios(10.0, 11.0), watchos(3.2, 4.0), macos(10.12, 10.13));

@end

NS_ASSUME_NONNULL_END
