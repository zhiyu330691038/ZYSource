#import "ZYSource.h"
@implementation ZYSource


#pragma mark - 初始化单例
+ (ZYSource *)getInstanse{
    static ZYSource * handle = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        handle = [[ZYSource alloc] init];
    });
    return handle;
}
- (NSString *) Cancel {
    return NSLocalizedString(@"Cancel", nil);
}

- (NSString *) Check {
    return NSLocalizedString(@"Check", nil);
}

- (NSString *) CopyToPasteboard {
    return NSLocalizedString(@"CopyToPasteboard", nil);
}

- (NSString *) DevLanguage {
    return NSLocalizedString(@"DevLanguage", nil);
}

- (NSString *) DevLanguageTips {
    return NSLocalizedString(@"DevLanguageTips", nil);
}

- (NSString *) FileExtensionInvalid {
    return NSLocalizedString(@"FileExtensionInvalid", nil);
}

- (NSString *) Finish {
    return NSLocalizedString(@"Finish", nil);
}

- (NSString *) FoundNum {
    return NSLocalizedString(@"FoundNum", nil);
}

- (NSString *) InputIsExist {
    return NSLocalizedString(@"InputIsExist", nil);
}

- (NSString *) InputKeyMsg {
    return NSLocalizedString(@"InputKeyMsg", nil);
}

- (NSString *) NoLocalizedFiles {
    return NSLocalizedString(@"NoLocalizedFiles", nil);
}

- (NSString *) OK {
    return NSLocalizedString(@"OK", nil);
}

- (NSString *) OnlyShowModified {
    return NSLocalizedString(@"OnlyShowModified", nil);
}

- (NSString *) Preferences {
    return NSLocalizedString(@"Preferences", nil);
}

- (NSString *) RecordNumMsg {
    return NSLocalizedString(@"RecordNumMsg", nil);
}

- (NSString *) Refresh {
    return NSLocalizedString(@"Refresh", nil);
}

- (NSString *) Remove {
    return NSLocalizedString(@"Remove", nil);
}

- (NSString *) Revoke {
    return NSLocalizedString(@"Revoke", nil);
}

- (NSString *) Save {
    return NSLocalizedString(@"Save", nil);
}

- (NSString *) Search {
    return NSLocalizedString(@"Search", nil);
}

- (NSString *) SearchDirectory {
    return NSLocalizedString(@"SearchDirectory", nil);
}

- (NSString *) SearchNumber {
    return NSLocalizedString(@"SearchNumber", nil);
}

- (NSString *) SearchTableName {
    return NSLocalizedString(@"SearchTableName", nil);
}

- (NSString *) StringManage {
    return NSLocalizedString(@"StringManage", nil);
}

- (NSString *) Test {
    return NSLocalizedString(@"Test", nil);
}

- (NSString *) Untranslated {
    return NSLocalizedString(@"Untranslated", nil);
}

- (NSString *) Unused {
    return NSLocalizedString(@"Unused", nil);
}

- (NSString *) UseTips {
    return NSLocalizedString(@"UseTips", nil);
}

- (NSString *) Wrapper {
    return NSLocalizedString(@"Wrapper", nil);
}

- (NSString *) WrapperTips {
    return NSLocalizedString(@"WrapperTips", nil);
}

- (NSString *) afds_fsdaf__fsdaf {
    return NSLocalizedString(@"afds fsdaf  fsdaf", nil);
}

- (NSString *) fasd {
    return NSLocalizedString(@"fasd", nil);
}

- (NSString *) fdsafdsa { 
    return NSLocalizedString(@"fdsafdsa", nil); 
}

@end