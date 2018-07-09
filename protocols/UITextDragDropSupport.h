/* Generated by RuntimeBrowser.
 */

@protocol UITextDragDropSupport <NSObject>

@required

- (bool)accessibilityCanDrag;
- (UIDragInteraction *)dragInteraction;
- (UIDropInteraction *)dropInteraction;
- (bool)isDragActive;
- (bool)isDropActive;
- (void)notifyTextInteraction;

@end