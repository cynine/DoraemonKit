//
//  DoraemonHealthAlertView.h
//  AFNetworking
//
//  Created by didi on 2020/1/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^DoraemonHealthAlertOKActionBlock)(void);
typedef void (^DoraemonHealthAlertCancleActionBlock)(void);

@interface DoraemonHealthAlertView : UIView

- (void)renderUI:(NSString *)title placeholder:(NSArray*)placeholders inputTip:(NSArray*)inputTips ok:(NSString *)okText cancle:(NSString *)cancleText okBlock:(DoraemonHealthAlertOKActionBlock)okBlock
cancleBlock:(DoraemonHealthAlertCancleActionBlock)cancleBlock;

- (NSArray *)getInputText;

@end

NS_ASSUME_NONNULL_END
