#import <Foundation/Foundation.h>

#define R [ZYSource getInstanse]
@interface ZYSource : NSObject

+ (ZYSource *)getInstanse;

/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Cancel
 *  
 *  
 *  Value:Cancel;lan:en
 *  
 *  Value:キャンセル;lan:ja
 *  
 *  Value:取消;lan:zh-Hans
 *  
 *  Value:取消;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Cancel ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Check
 *  
 *  
 *  Value:Check;lan:en
 *  
 *  Value:检查;lan:ja
 *  
 *  Value:检查;lan:zh-Hans
 *  
 *  Value:检查;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Check ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:CopyToPasteboard
 *  
 *  
 *  Value:%@ => pasteboard;lan:en
 *  
 *  Value:%@ => pasteboard.;lan:ja
 *  
 *  Value:%@ => 剪切板;lan:zh-Hans
 *  
 *  Value:%@ => 剪切板;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * CopyToPasteboard ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:DevLanguage
 *  
 *  
 *  Value:Developement Language;lan:en
 *  
 *  Value:開発言語;lan:ja
 *  
 *  Value:开发语言;lan:zh-Hans
 *  
 *  Value:開發語言;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * DevLanguage ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:DevLanguageTips
 *  
 *  
 *  Value:Default value got from the extension of AppDelegate file;lan:en
 *  
 *  Value:によってファイルの拡張子を黙認AppDelegate;lan:ja
 *  
 *  Value:默认根据AppDelegate文件的后缀判断;lan:zh-Hans
 *  
 *  Value:默認根據AppDelegate文件的後綴獲取;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * DevLanguageTips ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:FileExtensionInvalid
 *  
 *  
 *  Value:File extension is invalid.;lan:en
 *  
 *  Value:ファイル形式は間違っている;lan:ja
 *  
 *  Value:文件格式不對;lan:zh-Hans
 *  
 *  Value:文件格式不對;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * FileExtensionInvalid ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Finish
 *  
 *  
 *  Value:OK;lan:en
 *  
 *  Value:OK;lan:ja
 *  
 *  Value:完成;lan:zh-Hans
 *  
 *  Value:完成;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Finish ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:FoundNum
 *  
 *  
 *  Value:Num;lan:en
 *  
 *  Value:回数;lan:ja
 *  
 *  Value:次数;lan:zh-Hans
 *  
 *  Value:次數;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * FoundNum ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:InputIsExist
 *  
 *  
 *  Value:The string already exists;lan:en
 *  
 *  Value:文字列はすでに存在している;lan:ja
 *  
 *  Value:该字符串已经存在;lan:zh-Hans
 *  
 *  Value:該字符串已經存在;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * InputIsExist ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:InputKeyMsg
 *  
 *  
 *  Value:Please input the key:;lan:en
 *  
 *  Value:入力して下さい key:;lan:ja
 *  
 *  Value:请输入Key:;lan:zh-Hans
 *  
 *  Value:請輸入key：;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * InputKeyMsg ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:NoLocalizedFiles
 *  
 *  
 *  Value:No localized string file;lan:en
 *  
 *  Value:現地化言語ディレクトリを見つけていない;lan:ja
 *  
 *  Value:没有找到本地化文件;lan:zh-Hans
 *  
 *  Value:沒有找到本地化文件;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * NoLocalizedFiles ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:OK
 *  
 *  
 *  Value:OK;lan:en
 *  
 *  Value:確定;lan:ja
 *  
 *  Value:确定;lan:zh-Hans
 *  
 *  Value:確定;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * OK ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:OnlyShowModified
 *  
 *  
 *  Value:Modified;lan:en
 *  
 *  Value:改正の;lan:ja
 *  
 *  Value:修改的;lan:zh-Hans
 *  
 *  Value:改動的;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * OnlyShowModified ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Preferences
 *  
 *  
 *  Value:Preferences;lan:en
 *  
 *  Value:設定;lan:ja
 *  
 *  Value:偏好设置;lan:zh-Hans
 *  
 *  Value:偏好设置;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Preferences ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:RecordNumMsg
 *  
 *  
 *  Value:Total %ld records;lan:en
 *  
 *  Value:%ld件の記録がある;lan:ja
 *  
 *  Value:共%ld条记录;lan:zh-Hans
 *  
 *  Value:共%ld條記錄;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * RecordNumMsg ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Refresh
 *  
 *  
 *  Value:Refresh;lan:en
 *  
 *  Value:更新;lan:ja
 *  
 *  Value:刷新;lan:zh-Hans
 *  
 *  Value:刷新;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Refresh ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Remove
 *  
 *  
 *  Value:Remove;lan:en
 *  
 *  Value:削除;lan:ja
 *  
 *  Value:删除;lan:zh-Hans
 *  
 *  Value:刪除;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Remove ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Revoke
 *  
 *  
 *  Value:Revoke;lan:en
 *  
 *  Value:取り消す;lan:ja
 *  
 *  Value:撤销;lan:zh-Hans
 *  
 *  Value:撤銷;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Revoke ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Save
 *  
 *  
 *  Value:Save;lan:en
 *  
 *  Value:保存;lan:ja
 *  
 *  Value:保存;lan:zh-Hans
 *  
 *  Value:保存;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Save ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Search
 *  
 *  
 *  Value:Search;lan:en
 *  
 *  Value:検索;lan:ja
 *  
 *  Value:搜索;lan:zh-Hans
 *  
 *  Value:搜索;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Search ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:SearchDirectory
 *  
 *  
 *  Value:Search Directory(superior directory of *.lproj folder);lan:en
 *  
 *  Value:検索経路（*.lproj 上級ディレクトリ）;lan:ja
 *  
 *  Value:搜索路径（*.lproj 文件夹的上级目录）;lan:zh-Hans
 *  
 *  Value:搜索路徑（*.lproj 文件夹的上级目录）;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * SearchDirectory ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:SearchNumber
 *  
 *  
 *  Value:Number of search threads;lan:en
 *  
 *  Value:Number of search threads;lan:ja
 *  
 *  Value:搜索线程数;lan:zh-Hans
 *  
 *  Value:搜索線程數;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * SearchNumber ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:SearchTableName
 *  
 *  
 *  Value:Search Table Name(With extension of .strings);lan:en
 *  
 *  Value:検索表名（含まれ.strings接尾辞）;lan:ja
 *  
 *  Value:搜索表名（包含.strings后缀）;lan:zh-Hans
 *  
 *  Value:搜索表名（包含.strings後綴）;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * SearchTableName ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:StringManage
 *  
 *  
 *  Value:String Manage;lan:en
 *  
 *  Value:文字列管理;lan:ja
 *  
 *  Value:字符串管理;lan:zh-Hans
 *  
 *  Value:字符串管理;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * StringManage ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Test
 *  
 *  
 *  Value:When you are old and grey and full of sleep,\nAnd nodding by the fire, take down this book,\nAnd slowly read, and dream of the soft look,\nYour eyes had once, and of their shadows deep;\n\nHow many loved your moments of glad grace,\nAnd loved your beauty with love false or true,\nBut one man loved the pilgrim soul in you,\nAnd loved the sorrows of your changing face;\n\nAnd bending down beside the glowing bars,\nMurmur, a little sadly, how love fled,\nAnd paced upon the mountains overhead,\nAnd hid his face amid a crowd of stars.;lan:en
 *  
 *  Value:What’s your name?\nWhere are you?\nHow old are you?\nI love you~~\nI miss you;lan:ja
 *  
 *  Value:静夜思\n床前明月光，\n疑是地上霜。\n举头望明月，\n疑是地上霜。\n       —李白;lan:zh-Hans
 *  
 *  Value:      水陆草木之花，可爱者甚蕃。晋陶渊明独爱菊。自李唐来，世人甚爱牡丹。予独爱莲之出淤泥而不染，濯清涟而不妖，中通外直，不蔓不枝，香远益清，亭亭净植，可远观而不可亵玩焉。予谓菊，花之隐逸者也；牡丹，花之富贵者也；莲，花之君子者也。噫！菊之爱，陶后鲜有闻。莲之爱，同予者何人？牡丹之爱，宜乎众矣！;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Test ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Untranslated
 *  
 *  
 *  Value:Untranslated;lan:en
 *  
 *  Value:通訳なし;lan:ja
 *  
 *  Value:未翻译;lan:zh-Hans
 *  
 *  Value:未翻译;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Untranslated ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Unused
 *  
 *  
 *  Value:Unused;lan:en
 *  
 *  Value:未使用;lan:ja
 *  
 *  Value:未使用;lan:zh-Hans
 *  
 *  Value:未使用;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Unused ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:UseTips
 *  
 *  
 *  Value:Red: remove; Green: Add; Blue: modify; Single click: edit; Double click: revoke or copy to pasteboard.;lan:en
 *  
 *  Value:赤：削除；緑：添加；ブルー：改正；クリック：編集;撤回をダブルクリック：コピーせん断板;lan:ja
 *  
 *  Value:红色：删除；绿色：添加；蓝色：修改；单击：编辑；双击：撤销并拷贝到剪切板;lan:zh-Hans
 *  
 *  Value:红色：删除；绿色：添加；蓝色：修改；单击：编辑；双击：撤销并拷贝到剪切板fds;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * UseTips ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:Wrapper
 *  
 *  
 *  Value:Double Click Wrapper (e.g. XXXLocalizedString(key));lan:en
 *  
 *  Value:Double Click Wrapper (e.g. XXXLocalizedString(key));lan:ja
 *  
 *  Value:双击自动添加 (e.g. XXXLocalizedString(key));lan:zh-Hans
 *  
 *  Value:雙擊自動添加 (e.g. XXXLocalizedString(key));lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * Wrapper ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:WrapperTips
 *  
 *  
 *  Value:Replace ‘key’ in the brackets with the item double clicked.;lan:en
 *  
 *  Value:Replace ‘key’ in the brackets with the item double clicked.;lan:ja
 *  
 *  Value:用双击的项替换掉括号中的‘key’;lan:zh-Hans
 *  
 *  Value:用雙擊的項替換括號中的‘key’;lan:zh-Hant
 */
@property (nonatomic, strong, readonly) NSString * WrapperTips ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:afds fsdaf  fsdaf
 *  
 *  
 *  Value:32432;lan:en
 */
@property (nonatomic, strong, readonly) NSString * afds_fsdaf__fsdaf ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:fasd
 *  
 *  
 *  Value:fdsfdsa;lan:en
 *  
 *  Value:fsafsda;lan:ja
 */
@property (nonatomic, strong, readonly) NSString * fasd ;
/**
 *  @author kenny , 2016-10-20 05:29:35 +0000
 *  
 *  Key:fdsafdsa
 *  
 *  
 *  Value:rewqr;lan:en
 */
@property (nonatomic, strong, readonly) NSString * fdsafdsa ;
@end