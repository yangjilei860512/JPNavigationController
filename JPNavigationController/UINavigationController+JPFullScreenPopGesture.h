//
//  UINavigationController+JPFullScreenPopGesture.h
//  JPNavigationController
//
//  Hello! I am NewPan from Guangzhou of China, Glad you could use my framework, If you have any question or wanna to contact me, please open https://github.com/Chris-Pan or http://www.jianshu.com/users/e2f2d779c022/latest_articles
//

/**
 * This is a category for navigation controller.
 * Please use its category method to reach function accordingly.
 * 这是一个导航控制器的分类.
 * 使用以下的导航控制器的分类方法可以实现对应的功能.
 */

#import <UIKit/UIKit.h>
#import "JPNavigationController.h"

@interface UINavigationController (JPFullScreenPopGesture)

/*!
 * \~english
 * The biggest space allow pop leave screen left-slide in current root navigation controller.
 * Full screen width default, mean can call pop anywhere in screen.
 *
 * \~chinese
 * 在当前根控制器内全局设置最大允许pop手势离屏幕左侧的距离.
 * 默认为屏幕宽度, 代表全屏滑动.
 */
@property (nonatomic) CGFloat jp_interactivePopMaxAllowedInitialDistanceToLeftEdge;

/*!
 * \~english
 * Close or open pop gesture function for current viewcontroller in current root navigation controller.
 *
 * \~chinese
 * 在当前根控制器内关闭或打开单个页面pop手势.
 */
@property(nonatomic)BOOL jp_closePopForCurrentViewController;

/*!
 * \~english
 * Close or open pop gesture function for all viewcontrollers in current root navigation controller.
 *
 * \~chinese
 * 在当前根控制器内全局打开或关闭pop手势.
 */
@property(nonatomic)BOOL jp_closePopForAllViewController;

/*!
 * \~english
 * The root navigation controller.
 *
 * \~chinese
 * 根导航控制器.
 */
@property(nonatomic)JPNavigationController *jp_rootNavigationController;

/*!
 * \~english
 * The delegate for function of left-slip to push next viewController.
 *
 * \~chinese
 * 实现左滑left-slip push到下一个控制器的代理.
 */
@property(nonatomic)id<JPNavigationControllerDelegate> jp_delegate;

/*!
 * \~english
 * Pop to target view controller, you just need to pass in the class of target view controller. It's easy to use than system's popToViewController: animated: method.
 * @see JPWarpNavigationController.
 *
 * \~chinese
 * 弹出到指定类的控制器, 对应系统的 popToViewController: animated:方法.
 * @see JPWarpNavigationController.
 */
-(void)jp_popToViewControllerClassIs:(id)targetClass animated:(BOOL)animated;

@end
