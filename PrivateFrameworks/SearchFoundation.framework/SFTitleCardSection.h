/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFTitleCardSection : SFCardSection {
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) <SearchUITitleCardSection> *searchUICardSection;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (id)searchUICardSection;

@end