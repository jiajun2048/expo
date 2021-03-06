
#import <ReactABI21_0_0/ABI21_0_0RCTBridge.h>
#import <UEXGL.h>

#import "ABI21_0_0EXGLViewManager.h"

@interface ABI21_0_0EXGLView : UIView

- (instancetype)initWithManager:(ABI21_0_0EXGLViewManager *)mgr;

@property (nonatomic, copy) ABI21_0_0RCTDirectEventBlock onSurfaceCreate;

- (NSDictionary *)maybeStartARSession;
- (void)maybeStopARSession;
- (NSDictionary *)arMatricesForViewportSize:(CGSize)viewportSize zNear:(CGFloat)zNear zFar:(CGFloat)zFar;

// "protected"
@property (nonatomic, strong) EAGLContext *eaglCtx;
@property (nonatomic, assign) UEXGLContextId exglCtxId;

@end
