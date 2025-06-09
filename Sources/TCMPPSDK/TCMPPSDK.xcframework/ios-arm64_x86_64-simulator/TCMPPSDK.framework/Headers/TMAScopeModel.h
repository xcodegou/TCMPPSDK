//
//  TMAScopeModel.h
//  TCMPPSDK
//
//  Created by 石磊 on 2025/5/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static NSString * const Scopeuserinfo = @"scope.userInfo";
static NSString * const ScopeuserLocation = @"scope.userLocation";
static NSString * const ScopeuserFuzzyLocation = @"scope.userFuzzyLocation";
static NSString * const ScopeuserBackgroundLocation = @"scope.userLocationBackground";
static NSString * const Scopeinvoice = @"scope.invoice";
static NSString * const Scoperecord = @"scope.record";
static NSString * const ScopewritePhotosAlbum = @"scope.writePhotosAlbum";
static NSString * const Scopecamera = @"scope.camera";
static NSString * const ScopeScreenRecording = @"scope.screenRecording";
static NSString * const ScopeChooseImage = @"scope.chooseImage";
static NSString * const ScopeChooseVideo = @"scope.chooseVideo";
static NSString * const ScopeChooseMedia = @"scope.chooseMedia";
static NSString * const ScopeMakeMedia = @"scope.makeMedia";
static NSString * const ScopeChooseMessageFile = @"scope.chooseMessageFile";
static NSString * const ScopeGetClipboardData = @"scope.getClipboardData";
static NSString * const ScopeBluetooth = @"scope.bluetooth";
static NSString * const ScopeAddPhoneContact = @"scope.addPhoneContact";
static NSString * const ScopeAddPhoneCalendar = @"scope.addPhoneCalendar";

@interface TMAScopeModel : NSObject

@property (nonatomic, strong) NSString *scope;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *desc;
@property (nonatomic, strong) NSString *settingPageTitle;

+ (instancetype)modelWithScope:(NSString *)scope
                         title:(NSString *)title
                          desc:(NSString *)desc
              settingPageTitle:(NSString *)settingPageTitle;
@end

NS_ASSUME_NONNULL_END
