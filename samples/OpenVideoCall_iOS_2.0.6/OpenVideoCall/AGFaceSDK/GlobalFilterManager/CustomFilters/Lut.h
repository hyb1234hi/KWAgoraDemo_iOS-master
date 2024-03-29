//
//  Lut.h
//  ZPCamera
//
//  Created by luoo on 17/1/24.
//  Copyright © 2017年 陈浩. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGRenderProtocol.h"
#import "GPUImage.h"
#import "GPUImageFourInputFilter.h"

@interface LutFilter : GPUImageTwoInputFilter


@end

@interface Lut : GPUImageFilterGroup <AGRenderProtocol>
{
    GPUImagePicture *imageSource;
}
@property(nonatomic, readonly) BOOL needTrackData;

- (id)initWithImage:(UIImage *)image_;

@end
