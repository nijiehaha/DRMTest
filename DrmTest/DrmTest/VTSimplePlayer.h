//
//  VTSimplePlayer.h
//  VTAntiScreenCapture_Example
//
//  Created by Vincent on 2018/12/31.
//  Copyright © 2018 mightyme@qq.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>


@interface VTSimplePlayer : NSObject

- (void)playURL:(NSString *)url inView:(UIView *)container;

@end

@interface VTSimpleResourceLoaderDelegate : NSObject<AVAssetResourceLoaderDelegate>

@end
