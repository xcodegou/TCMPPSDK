//
//  TCMPPSDK.h
//  TCMPPSDK
//
//  Created by 石磊 on 2024/6/10.
//
#import <Foundation/Foundation.h>

#define TCMPPSDK_VERSION @"$Build_Version"

//! Project version number for TCMPPSDK.
FOUNDATION_EXPORT double TCMPPSDKVersionNumber;

//! Project version string for TCMPPSDK.
FOUNDATION_EXPORT const unsigned char TCMPPSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <TCMPPSDK/TCMPPSDK/PublicHeader.h>

// Core SDK Headers
#import <TCMPPSDK/TMAHostModel.h>
#import <TCMPPSDK/TMARealtimeLogItem.h>
#import <TCMPPSDK/TMAConfigDefine.h>
#import <TCMPPSDK/TMAServerConfig.h>
#import <TCMPPSDK/TMAModelUtils.h>
#import <TCMPPSDK/TMAAppUserInfo.h>
#import <TCMPPSDK/TMASettingItem.h>
#import <TCMPPSDK/TMAVideoViewDefine.h>
#import <TCMPPSDK/TMAEntryModel.h>
#import <TCMPPSDK/TMFMiniAppInfo.h>
#import <TCMPPSDK/TMAFileManager.h>
#import <TCMPPSDK/AlertActionInfo.h>
#import <TCMPPSDK/TMFMiniAppSDKManager.h>
#import <TCMPPSDK/NSError+MiniAppSDK.h>
#import <TCMPPSDK/TMAExternalJSPlugin.h>
#import <TCMPPSDK/TMAErrorDefine.h>
#import <TCMPPSDK/TMADelegateDefine.h>
#import <TCMPPSDK/TMAVideoPlayerProtocol.h>
#import <TCMPPSDK/TMAShareModel.h>
#import <TCMPPSDK/TMALocationModel.h>
#import <TCMPPSDK/TMFMiniAppSDKDelegate.h>
#import <TCMPPSDK/TMAChooseMessageFileModel.h>
#import <TCMPPSDK/TMAScopeModel.h>

// KongServer Category Headers
#import <TCMPPSDK/TMAKongGUIDCertifier+UserInfo.h>
#import <TCMPPSDK/TMAKongGUIDCertifier+Protected.h>
#import <TCMPPSDK/TMAKongCenter+Task.h>

// SDK Category Headers
#import <TCMPPSDK/MiniAppSDK+MemoryPressure.h>
#import <TCMPPSDK/MiniAppSDK+PreCache.h>
#import <TCMPPSDK/MiniAppSDK+MiniApp.h>
#import <TCMPPSDK/MiniAppSDK+StartUp.h>
#import <TCMPPSDK/MiniAppSDK+AudioSession.h>
#import <TCMPPSDK/MiniAppSDK+WebContainer.h>
#import <TCMPPSDK/TMFMiniAppSDKManager+Internal.h>
#import <TCMPPSDK/TMAServerConfig+Internal.h>
#import <TCMPPSDK/TMFAppletSearchInfo+Internal.h>
#import <TCMPPSDK/TMFMiniAppInfo+Internal.h>

// Base Application Category Headers
#import <TCMPPSDK/MABaseApplication+SharePanel.h>
#import <TCMPPSDK/MABaseApplication+Private.h>
#import <TCMPPSDK/MABaseApplication+GDTReport.h>
#import <TCMPPSDK/MABaseApplication+HalfScreen.h>
#import <TCMPPSDK/MAService+Private.h>
#import <TCMPPSDK/MAUIConfig+Private.h>
#import <TCMPPSDK/MAUIConfig+View.h>
#import <TCMPPSDK/TMAJSPluginEngine+Private.h>
#import <TCMPPSDK/MAWebView+Private.h>

// WebContainer Category Headers
#import <TCMPPSDK/MAApplication+WebContainer.h>
#import <TCMPPSDK/UIViewController+WebContainer.h>

// UI Category Headers
#import <TCMPPSDK/UIViewController+MiniApp.h>
#import <TCMPPSDK/UIView+MiniApp.h>
#import <TCMPPSDK/UIImage+FixOrientation.h>
#import <TCMPPSDK/UIFont+MiniApp.h>
#import <TCMPPSDK/WKWebViewConfiguration+TMFMiniApp.h>
#import <TCMPPSDK/UIViewController+QQFoundation.h>
#import <TCMPPSDK/UIView+QQFoundation.h>
#import <TCMPPSDK/UIKit+QQFoundation.h>
#import <TCMPPSDK/UIDevice+QQFoundation.h>
#import <TCMPPSDK/UIColor+QQFoundation.h>

// RTL Support Category Headers
#import <TCMPPSDK/UIView+RTL.h>
#import <TCMPPSDK/UITextView+RTL.h>
#import <TCMPPSDK/UILabel+RTL.h>
#import <TCMPPSDK/UIImage+RTL.h>
#import <TCMPPSDK/UITextField+RTL.h>

// Image and Color Category Headers
#import <TCMPPSDK/UIImage+CropImage.h>
#import <TCMPPSDK/UIColor+DarkAndLightColor.h>

// TabBar Category Headers
#import <TCMPPSDK/UITabBar+Badge.h>

// Camera Category Headers
#import <TCMPPSDK/MACameraView+Private.h>

// File Upload Category Headers
#import <TCMPPSDK/TMAUploadFile+Fragment.h>
#import <TCMPPSDK/TMAUploadFileFragment+Data.h>

// File Manager Category Headers
#import <TCMPPSDK/TMAFileSystemJSPlugin+FileHandle.h>
#import <TCMPPSDK/TMAFileSystemJSPlugin+FolderOpPlugin.h>
#import <TCMPPSDK/TMAFileSystemJSPlugin+FileOpPlugin.h>

// Utils Category Headers
#import <TCMPPSDK/NSMutableData+TMANetwork.h>
#import <TCMPPSDK/NSString+TMANetwork.h>
#import <TCMPPSDK/NSURL+TMAIPv6Proxy.h>

// Protocol Category Headers
#import <TCMPPSDK/MMiniAppMiniAppUpdateInfo+Utils.h>

// JS Plugin Category Headers
#import <TCMPPSDK/TMAInputPlugin+TextView.h>
#import <TCMPPSDK/TMAInputPlugin+TextField.h>

// Default Delegate Implementation Category Headers
#import <TCMPPSDK/MiniAppDelegateImp+UI.h>
#import <TCMPPSDK/MiniAppDelegateImp+Cache.h>

// Profile Reporter Category Headers
#import <TCMPPSDK/TMAProfileReporter+Private.h>
#import <TCMPPSDK/TMAProfileReporter+KeyValue.h>
#import <TCMPPSDK/TMAProfileReporter+CustomTag.h>
#import <TCMPPSDK/TMAProfileDefines+Private.h>

// Report Category Headers
#import <TCMPPSDK/MAReportItem+miniGame.h>
#import <TCMPPSDK/MAReportItem+Define.h>
#import <TCMPPSDK/TMADataReportManager+Private.h>

// QQFoundation Category Headers
#import <TCMPPSDK/NSHTTPCookie+QQFoundation.h>
#import <TCMPPSDK/NSTimer+QQFoundation.h>
#import <TCMPPSDK/NSArray+QQFoundation.h>
#import <TCMPPSDK/NSMutableArray+QQFoundation.h>
#import <TCMPPSDK/NSData+QQCrypto.h>
#import <TCMPPSDK/NSData+QQFoundation.h>
#import <TCMPPSDK/NSDate+QQFoundation.h>
#import <TCMPPSDK/AVAsset+QQFoundation.h>
#import <TCMPPSDK/NSString+QQFoundation.h>
#import <TCMPPSDK/NSError+QQFoundation.h>
#import <TCMPPSDK/PHAsset+QQFoundation.h>

// Login Category Headers
#import <TCMPPSDK/TCMPPLoginManager+Network.h>
