#import "TGFont.h"

@class POPAnimation;
@class POPSpringAnimation;

@interface TGPhotoEditorInterfaceAssets : NSObject

+ (UIColor *)toolbarBackgroundColor;
+ (UIColor *)toolbarTransparentBackgroundColor;

+ (UIColor *)cropTransparentOverlayColor;

+ (UIColor *)accentColor;

+ (UIColor *)panelBackgroundColor;
+ (UIColor *)selectedImagesPanelBackgroundColor;

+ (UIColor *)editorButtonSelectionBackgroundColor;

+ (UIImage *)captionIcon;
+ (UIImage *)cropIcon;
+ (UIImage *)toolsIcon;
+ (UIImage *)rotateIcon;
+ (UIImage *)paintIcon;
+ (UIImage *)stickerIcon;
+ (UIImage *)textIcon;
+ (UIImage *)gifIcon;
+ (UIImage *)gifActiveIcon;

+ (UIColor *)toolbarSelectedIconColor;
+ (UIColor *)toolbarAppliedIconColor;

+ (UIColor *)editorItemTitleColor;
+ (UIColor *)editorActiveItemTitleColor;
+ (UIFont *)editorItemTitleFont;

+ (UIColor *)filterSelectionColor;

+ (UIColor *)sliderBackColor;
+ (UIColor *)sliderTrackColor;

@end
