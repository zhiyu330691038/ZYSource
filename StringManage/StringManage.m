//
//  StringManage.m
//  StringManage
//
//  Created by kiwik on 1/13/16.
//  Copyright © 2016 Kiwik. All rights reserved.
//

#import "StringManage.h"
#import "StringWindowController.h"
#import "StringModel.h"
#import "XcodeEditor.h"
#import "SelectInfoViewController.h"

static dispatch_once_t onceToken;

@interface StringManage(){
    NSPopover * editPopOver;
}
@property (nonatomic, strong, readwrite) NSBundle *bundle;
@property (nonatomic, strong) StringWindowController* windowController;
@property (nonatomic, strong) SelectInfoViewController * infoViewController;
@end

@implementation StringManage

+ (void)pluginDidLoad:(NSBundle *)plugin {
    NSString *currentApplicationName = [[NSBundle mainBundle] infoDictionary][@"CFBundleName"];
    if ([currentApplicationName isEqual:@"Xcode"]) {
        dispatch_once(&onceToken, ^{
            sharedPlugin = [[StringManage alloc] initWithBundle:plugin];
        });
    }
}

+ (instancetype)sharedPlugin {
    dispatch_once(&onceToken, ^{
        NSBundle *bundle = [NSBundle mainBundle];
        sharedPlugin = [[StringManage alloc] initWithBundle:bundle];
    });
    return sharedPlugin;
}

- (id)initWithBundle:(NSBundle *)plugin {
    if (self = [super init]) {
        self.bundle = plugin;
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(didApplicationFinishLaunchingNotification:)
                                                     name:NSApplicationDidFinishLaunchingNotification
                                                   object:nil];
//        [[NSNotificationCenter defaultCenter] addObserver:self
//                                                 selector:@selector(selectRang:)
//                                                     name:NSTextViewDidChangeSelectionNotification
//                                                   object:nil];
    }
    return self;
}

- (void)didApplicationFinishLaunchingNotification:(NSNotification*)noti {
    [[NSNotificationCenter defaultCenter] removeObserver:self name:NSApplicationDidFinishLaunchingNotification object:nil];
    
    NSMenuItem *menuItem = [[NSApp mainMenu] itemWithTitle:@"Edit"];
    if (menuItem) {
        [[menuItem submenu] addItem:[NSMenuItem separatorItem]];
        NSMenuItem *actionMenuItem = [[NSMenuItem alloc] initWithTitle:LocalizedString(@"StringManage") action:@selector(doMenuAction) keyEquivalent:@"s"];
        [actionMenuItem setKeyEquivalentModifierMask:NSAlphaShiftKeyMask | NSControlKeyMask];
        [actionMenuItem setTarget:self];
        [[menuItem submenu] addItem:actionMenuItem];
    }
}


- (void)selectRang:(NSNotification *)noti{
    NSLog(@"%@",noti);
    
    if ([[noti object] isKindOfClass:[NSTextView class]]) {
        NSTextView* textView = (NSTextView *)[noti object];
        
        NSArray* selectedRanges = [textView selectedRanges];
        if (selectedRanges.count==0) {
            return;
        }
        
        NSRange selectedRange = [[selectedRanges objectAtIndex:0] rangeValue];
        NSString* text = textView.textStorage.string;
        NSLog(@"%@",[text substringWithRange:selectedRange]);
        NSString * selectText = [text substringWithRange:selectedRange];
        if([selectText hasPrefix:@"R."]){
            [self showInfoView:textView Text:text];
        }else{
            [editPopOver close];
            self.infoViewController = nil;
        }
        
    }
}


- (void)showInfoView:(NSTextView *)textView Text:(NSString *)text{

    
    
    
//SelectInfoView
//
//    
//    [[SelectInfoView alloc] initni]
//    StringEditViewController *vc = [[SelectInfoView alloc] initWithNibName:@"StringEditViewController"
//                                                  bundle:[StringManage sharedPlugin].bundle];
//    self.infoView = [[SelectInfoView alloc] initWithFrame:buttonRect];
//    
//    [textView addSubview:self.infoView];

}

- (void)doMenuAction {
    NSString* filePath = [[StringModel currentWorkspaceDocument].workspace.representingFilePath.fileURL path];
    if (filePath) {
        if (self.windowController.window.isVisible) {
            [self.windowController.window close];
        } else {
            if (self.windowController == nil) {
                self.windowController = [[StringWindowController alloc] initWithWindowNibName:@"StringWindowController"];
            }
            NSString* projectDir = [filePath stringByDeletingLastPathComponent];
            NSString *projectName = [filePath lastPathComponent];
            [self.windowController.window makeKeyAndOrderFront:nil];
            [self.windowController setSearchRootDir:projectDir projectName:projectName];
            [self.windowController refresh:nil];
 
        }
    }
}

@end
