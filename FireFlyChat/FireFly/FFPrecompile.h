
//
//  FFPrecompile.h
//  SmartMesh
//
//  Created by Rain on 17/10/20.
//  Copyright © 2017年 SmartMesh Foundation All rights reserved.
//

#define FF_MAX_HEIGHT   1280
#define FF_MAX_WIDTH    1280
#define FF_MAX_KB       1024*150
#define FF_MAX_COVER_KB   1024*50
#define FF_MAX_SCALE   3
#define FF_COMPRESS   0.9
#define FF_MIN_SIZE   80



#define NA_RELEASE (0)

#if defined(NA_RELEASE) && NA_RELEASE

#define NEXT_APP_INTERFACE_ADDRESS @"http://open.smartmesh.io/index.php"
#define NEXT_APP_CHAT_SERVER @"xmpp.yueni.cc"
#define NEXT_APPSTORE_BUY 1
#define NEXT_APP_VIDEO_BUCKET @"production"
#define NEXT_APP_GIF_BUCKET @"openfacecollect"
#define NEXT_APP_GIF_URL @"http://openfacecollect-10065765.cos.myqcloud.com/"
#define YUENI_GIF_URL @"http://openfacecollect-10000208.file.myqcloud.com/"
#define YIQIBO_SHARE_LINK @"http://wx.youxi01.cn/register.html?presenter="
#define PROPSHOPCONFIG @"http://ct.youxi01.cn/Uploads/propshop/config.txt"
#define PROPSHOP @"http://images.youxi01.cn/propshop/"
#define NEXT_APP_FILE_BUCKET @"openfile"
#define NEXT_APP_FILE_EXPIRE_TIME @"691200"

#define APPINTRO @"http://www.youxi01.cn/app/document/appintro.html"
#define AGREEMENT @"http://www.youxi01.cn/app/document/agreement.html"
#define VERINTRO @"http://www.youxi01.cn/app/document/verintro.html"
#define QRUSER @"http://www.youxi01.cn/phone/qruser.html?uid=%@"
#define QRSTATICGROUP @"http://www.youxi01.cn/phone/qrstaticgroup.html?gid=%@&sourceApp=%@"
#define QRGROUP @"http://www.youxi01.cn/phone/qrgroup.html?gid=%@"


#define NEXT_APP_SHARE_LIVE @"http://www.youxi01.cn/phone/liveInfo.html?roomID=%ld"
#define NEXT_APP_SHARE_PLAY_BACK @"http://www.youxi01.cn/phone/vodInfo.html?vodid=%@"
#define NEXT_APP_SHARE_DYNAMIC @"http://www.youxi01.cn/phone/dynamicShare.html?doid=%@&username=%@"
#define NEXT_APP_SHARE_INVITE @"http://www.youxi01.cn/phone/activityShare.html"
#define NEXT_APP_GROUP_SHARE @"http://www.youxi01.cn/phone/groupShare.html?gid=%@"
#define NEXT_APP_VIP_INTRO @""
#define NEXT_HTTPS_CERT @"DisHttpsCert"
#define NA_CONNECT_INVITE @"http://www.youxi01.cn/phone/voicecall.html?roomID=%@"
#define NA_Skill_Protocol @"http://www.youxi01.cn/app/youxing/index.html"
#define NA_Skill_Rule     @"http://www.youxi01.cn/app/youxing/rule.html"

#else

#define NEXT_APP_INTERFACE_ADDRESS @"http://beta.smartmesh.io/index.php"
#define NEXT_APP_CHAT_SERVER @"118.89.56.218"

#define NEXT_APPSTORE_BUY 0
#define NEXT_APP_VIDEO_BUCKET @"develop"
#define NEXT_APP_GIF_BUCKET @"betafacecollect"
#define NEXT_APP_GIF_URL @"http://betafacecollect-10065765.cos.myqcloud.com/"
#define YUENI_GIF_URL @"http://betafacecollect-10000208.file.myqcloud.com/"
#define YIQIBO_SHARE_LINK @"http://wxbug.youxi01.cn/register.html?presenter="
#define PROPSHOPCONFIG @"http://ct.youxi01.cn/Uploads/propshop/config.txt"
#define PROPSHOP @"http://ct.youxi01.cn/Uploads/propshop/"
#define NEXT_APP_FILE_BUCKET @"openfile"
#define NEXT_APP_FILE_EXPIRE_TIME @"691200"


#define APPINTRO @"http://test.youxi01.cn/app/document/appintro.html"
#define AGREEMENT @"http://test.youxi01.cn/app/document/agreement.html"
#define VERINTRO @"http://test.youxi01.cn/app/document/verintro.html"
#define QRUSER @"http://test.youxi01.cn/phone/qruser.html?uid=%@"
#define QRSTATICGROUP @"http://test.youxi01.cn/phone/qrstaticgroup.html?gid=%@&sourceApp=%@"
#define QRGROUP @"http://test.youxi01.cn/phone/qrgroup.html?gid=%@"
#define NEXT_APP_SHARE_LIVE @"http://test.youxi01.cn/phone/liveInfo.html?roomID=%ld"
#define NEXT_APP_SHARE_PLAY_BACK @"http://test.youxi01.cn/phone/vodInfo.html?vodid=%@"
#define NEXT_APP_SHARE_DYNAMIC @"http://test.youxi01.cn/phone/dynamicShare.html?doid=%@&username=%@"
#define NEXT_APP_SHARE_INVITE @"http://test.youxi01.cn/phone/activityShare.html"
#define NEXT_APP_GROUP_SHARE @"http://test.youxi01.cn/phone/groupShare.html?gid=%@"
#define NEXT_APP_VIP_INTRO @""
#define NEXT_HTTPS_CERT @"DevHttpsCert"
#define NA_CONNECT_INVITE @"http://test.youxi01.cn/phone/voicecall.html?roomID=%@"
#define NA_Skill_Protocol @"http://test.youxi01.cn/app/youxing/index.html"
#define NA_Skill_Rule     @"http://test.youxi01.cn/app/youxing/rule.html"
#endif


#define NA_RSA_KEY  @"MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCphjph5VHgfB8MFIGJSMHIAE+WnJ1BsiHKxtaJzoAb0v/IG+5w0fQ2713BbdEVoHtvMXtqTtluStj009ZOPkjiTm/fKlhx9hO5I6bct4r8Y70HDSmHjnNZm7sKHtxdbtAf65/+0xTsC0g8/hiq9wjD8a8KxbvKVxE/n5JluWllFQIDAQAB"

#define kAppKey         @"1167039124"

//替换完这里还需要处理plist URL Type
#define AppleId         @"770523952"
#define QQAppKey        @"1105634893"
#define QQAppSecret     @"LVAn7k7rNQlbrh5F"

#define WeBoAppKey      @"1353257489"
#define NA_WEIBO_KEY    @"1353257489"
#define TCWBAppKey      @"1105634893"
#define TCWBAppSecret   @"LVAn7k7rNQlbrh5F"
#define NA_WECHA_KEY    @"wxc7d0669bf99bfd71"
#define kRedirectURI    @"https://www.youxi01.cn"
#define MAMapKey        @"0dc99e67f1797b8d30447190b293a8f2"
#define UMKey           @"57e4ca7e67e58e15360023a4"
#define URLScheme       @"youxi01"
#define URLSchemeHttp   @"youxi01://"

#define AppName         @"SmartMesh"
#define AppNameFriend   @"SmartMesh好友"
#define ShareAppFriend  @"分享给SmartMesh好友"
#define AppNamePay      @"SmartMesh支付"
