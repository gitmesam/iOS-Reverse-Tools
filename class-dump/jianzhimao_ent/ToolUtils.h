//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ToolUtils : NSObject
{
}

+ (id)replaceString:(id)arg1 withSpecialString:(id)arg2 inString:(id)arg3;
+ (id)lastWindow;
+ (id)formatDateWithOriginal:(id)arg1 goalFormat:(id)arg2;
+ (long long)countWord:(id)arg1;
+ (id)getBlodFontSize:(long long)arg1;
+ (id)getLightFontSize:(long long)arg1;
+ (id)getDeviceModel;
+ (id)getDeviceVersion;
+ (id)getSystemVersion;
+ (id)getSystemName;
+ (id)getUDID;
+ (id)base64StringFromImage:(id)arg1;
+ (id)image2DataURL:(id)arg1;
+ (_Bool)imageHasAlpha:(id)arg1;
+ (id)noStretchImageWithImage:(id)arg1;
+ (id)noStretchImageWithImage:(id)arg1 Top:(double)arg2 Bottom:(double)arg3 Left:(double)arg4 Right:(double)arg5;
+ (long long)indexOfStringWaitForSub:(id)arg1 CountOfASCII:(long long)arg2;
+ (int)getTextLength:(id)arg1;
+ (double)timeDiffWithTimeString:(id)arg1 time2:(id)arg2 formatter:(id)arg3;
+ (double)timeDiffWithDate:(id)arg1 date2:(id)arg2;
+ (long long)checkDateTimeWithDate1:(id)arg1 Data2:(id)arg2;
+ (id)dateForGMT:(id)arg1;
+ (id)dateFromDateString:(id)arg1 Formatter:(id)arg2;
+ (id)getCurrentDateWithFormatter:(id)arg1;
+ (id)getTimeNowWithFormatter:(id)arg1;
+ (id)dateStringFromDate:(id)arg1 Formatter:(id)arg2;
+ (void)formatRawFacebookContentForFrontEndRichTextContents:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)isEmptyDictionary:(id)arg1;
+ (_Bool)isEmptyArray:(id)arg1;
+ (_Bool)isEmpty:(id)arg1;
+ (id)orgianPath:(id)arg1;
+ (id)colorWithHexString:(id)arg1 andAlpha:(double)arg2;
+ (id)colorWithHexString:(id)arg1;
+ (_Bool)checkPhone:(id)arg1;
+ (_Bool)checkEmail:(id)arg1;
+ (id)md5:(id)arg1;
+ (void)showCustomViewHUD:(id)arg1 imageName:(id)arg2 andView:(id)arg3;
+ (void)showCustomViewHUD:(id)arg1 imageName:(id)arg2 andViewController:(id)arg3;
+ (void)showHUD:(id)arg1 andView:(id)arg2 andHUD:(id)arg3;
+ (void)deleteFileWithFileName:(id)arg1;
+ (float)fileSizeAtPath:(id)arg1;
+ (void)removeFolderWithPath:(id)arg1;
+ (float)folderSizeAtPath:(id)arg1;
+ (_Bool)isDataInSanbox;
+ (void)deleteDataInSanbox;
+ (id)getDataFromSanboxWithPersonalInfo;
+ (void)setDataToSandboxWithPersonalInfo:(id)arg1;
+ (double)heightForTextView:(id)arg1;
+ (double)widthForLabel:(id)arg1;
+ (double)heightForLabel:(id)arg1;
+ (id)returnCachePath;

@end
