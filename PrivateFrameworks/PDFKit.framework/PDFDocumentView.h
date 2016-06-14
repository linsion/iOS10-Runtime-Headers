/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFDocumentView : UIView <PDFDocumentPageChangeDelegate> {
    PDFDocumentViewPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createPageView:(id)arg1;
- (void)dealloc;
- (void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)document;
- (struct CGSize { double x1; double x2; })documentViewSize;
- (id)getPDFView;
- (id)init;
- (double)lastLayoutDuration;
- (void)magnificationDidChange;
- (void)magnificationWillChange;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (id)pageViews;
- (void)previewRotateShiftPages:(double)arg1;
- (void)setDisplayBox:(long long)arg1;
- (void)setDocument:(id)arg1;
- (void)setEnablePageShadows:(bool)arg1;
- (void)setFirstPage:(unsigned long long)arg1 andLastPage:(unsigned long long)arg2 forDisplayMode:(long long)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPageViewVisibilityDelegate:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)updateVisibility;

@end