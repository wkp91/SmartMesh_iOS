//
//  FFSearchContactCell.m
//  NextApp
//
//  Created by Megan on  17-12-12.
//  Copyright (c) 2017年 SmartMesh Foundation All rights reserved.
//

#import "FFSearchContactCell.h"

@interface FFSearchContactCell ()
{
    UIImageView *_avatarView;
    UILabel     *_nameLabel;
}
@end

@implementation FFSearchContactCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        [self setupContentView];
    }
    return self;
}

- (void)setupContentView
{
    _avatarView = [[UIImageView alloc] initWithFrame:LC_RECT(DDYSCREENW - 56, 5, 30, 30)];
    _avatarView.image = [UIImage imageNamed:@"icon_head_defaul"];
    _avatarView.backgroundColor = LC_RGB(235, 235, 235);
    _avatarView.layer.cornerRadius = 15;
    _avatarView.layer.masksToBounds = YES;
    [self.contentView addSubview:_avatarView];
    
    _nameLabel = [[UILabel alloc] initWithFrame:LC_RECT(15, 0, DDYSCREENW - 86, 40)];
    _nameLabel.textColor = LC_RGB(42, 42, 42);
    _nameLabel.font = NA_FONT(17);
    [self.contentView addSubview:_nameLabel];
}

-(void)setUser:(FFUser *)user
{
    [_avatarView sd_setImageWithURL:[NSURL URLWithString:user.userImage] placeholderImage:[UIImage imageNamed:@"icon_head_defaul"]];
    _avatarView.image = [UIImage imageWithColor:DDY_LightGray size:CGSizeMake(30, 30)];
    _nameLabel.text = user.noteName? user.noteName : user.username;
}

@end
