/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicTableView : UITableView {
    float _footerBackgroundTransitionWeighting;
    float _headerBackgroundTransitionWeighting;
    float _minimumContentSizeHeightAdditions;
}

@property float footerBackgroundTransitionWeighting;
@property float headerBackgroundTransitionWeighting;
@property float minimumContentSizeHeightAdditions;

- (float)footerBackgroundTransitionWeighting;
- (float)headerBackgroundTransitionWeighting;
- (void)layoutSubviews;
- (float)minimumContentSizeHeightAdditions;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFooterBackgroundTransitionWeighting:(float)arg1;
- (void)setHeaderBackgroundTransitionWeighting:(float)arg1;
- (void)setMinimumContentSizeHeightAdditions:(float)arg1;
- (void)setTableHeaderBackgroundColor:(id)arg1;
- (void)updateStateForFooterView:(id)arg1 inSection:(int)arg2;
- (void)updateStateForHeaderView:(id)arg1 inSection:(int)arg2;
- (void)updateVisibleHeaderFooterState;

@end