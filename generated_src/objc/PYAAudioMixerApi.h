// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from audio_mixer.djinni

#import "PYAMixerConfig.h"
#import "PYAMixerSource.h"
#import <Foundation/Foundation.h>
@class PYAAudioMixerApi;


@interface PYAAudioMixerApi : NSObject

+ (nullable PYAAudioMixerApi *)create:(nonnull PYAMixerConfig *)config;

- (void)updateVolume:(int32_t)ssrc
              volume:(float)volume;

- (BOOL)addSource:(nonnull PYAMixerSource *)source;

- (BOOL)removeSource:(int32_t)ssrc;

@end