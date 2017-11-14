#import "GPUImageFilterGroup.h"
#import "SixInputFilter.h"
#import "AGRenderProtocol.h"
#import "GPUImage.h"
#import "GPUImageFourInputFilter.h"

@interface SutroFilter : SixInputFilter

@end

@interface Sutro : GPUImageFilterGroup <AGRenderProtocol>
{
    GPUImagePicture *imageSource1;
    GPUImagePicture *imageSource2;
    GPUImagePicture *imageSource3;
    GPUImagePicture *imageSource4;
    GPUImagePicture *imageSource5;
}

@property(nonatomic, readonly) BOOL needTrackData;

@end