//
//  EasyGalleryViewController.h
//  EasyGallery
//
//  Created by Hiroshi Hashiguchi on 10/09/28.
//  Copyright 2010 . All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XCGalleryView.h"

@interface EasyGalleryViewController : UIViewController <XCGalleryViewDelegate> {

	NSMutableArray* imageFiles_;
}

@property (nonatomic, retain) NSMutableArray* imageFiles;


@end
