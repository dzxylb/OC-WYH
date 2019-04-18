//
//  PParser.h
//  JXRichTextDemo
//
//  Created by hnbwyh on 2019/4/17.
//  Copyright © 2019 JiXia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HTMLParser.h"

NS_ASSUME_NONNULL_BEGIN

@interface PParser : HTMLParser

- (NSAttributedString *)addAttributesWithAts:(NSMutableAttributedString *)ats attribute:(NSDictionary *)attribute;

@end

NS_ASSUME_NONNULL_END
