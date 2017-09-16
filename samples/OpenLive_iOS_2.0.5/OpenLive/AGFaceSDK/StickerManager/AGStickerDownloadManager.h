//
//  AGStickerDownloadManager.h
//  AGFaceKitDemo
//
//  Created by jacoy on 17/1/20.
//  Copyright © 2017年 0dayZh. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AGSticker;

@interface AGStickerDownloadManager : NSObject

+ (instancetype)sharedInstance;

/**
 Download a single sticker
 
 @param sticker the sticker to download
 @param index the index of the sticker in the array
 @param animating the animation when downloading
 @param success download successed callback
 @param failed download failed callback
 */

- (void)downloadSticker:(AGSticker *)sticker index:(NSInteger)index withAnimation:(void (^)(NSInteger index))animating successed:(void (^)(AGSticker *sticker, NSInteger index))success failed:(void (^)(AGSticker *sticker, NSInteger index))failed;

/**
 Download all unsaved stickers
 
 @param stickers the array of all stickers
 @param animating the animation when downloading
 @param success the sticker download successed
 @param failed the sticker download failed
 */

- (void)downloadStickers:(NSArray *)stickers withAnimation:(void (^)(NSInteger index))animating successed:(void (^)(AGSticker *sticker, NSInteger index))success failed:(void (^)(AGSticker *sticker, NSInteger index))failed;

@end
