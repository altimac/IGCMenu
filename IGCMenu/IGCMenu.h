//
//  IGCMenu.h
//  IGCMenu
//
//  Created by Sunil Sharma on 11/02/16.
//  Copyright (c) 2016 Sunil Sharma. All rights reserved.
//
//
// ALTIMAC'S NOTE: I can't say this code is good. Honestly it's even pretty bad, but it's simple and does mostly what's needed in Herdly. Other more robust codes are too complex and swift :(
// Best code is probably this one (swift only): https://github.com/tungvoduc/DTButtonMenuController but it is not as easy to integrate in Herdly...
// Found a much better code, objc and easy to integrate in Herdly: https://github.com/nuudles/VLDContextSheet

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
    BlurEffectExtraLight,
    BlurEffectLight,
    BlurEffectDark,
    Dark,
    None
}IGCMenuBackgroundOptions;

typedef enum {
    Top,
    Bottom,
}IGCMenuPositionOptions;

@protocol IGCMenuDelegate <NSObject>

@optional
-(void)igcMenuSelected:(NSString *)selectedMenuName atIndex:(NSInteger)index;

@end

@interface IGCMenu : NSObject

@property (weak) id <IGCMenuDelegate>delegate;

@property (nonatomic) NSInteger numberOfMenuItem;   //Number of menu items to show
@property (nonatomic) CGFloat menuRadius;           //Radius for circular menu
@property (weak,nonatomic) UIButton *menuButton;    //Menu button reference
@property (weak,nonatomic) UIView *menuSuperView;   //Menu button super view reference
@property (strong,nonatomic) NSArray *menuItemsNameArray;        //Menu items name array,it can be empty
@property (strong,nonatomic) NSArray *menuBackgroundColorsArray; //Menu items background color,it can be empty, default color is white
@property (strong,nonatomic) NSArray *menuImagesNameArray;       //Menu item icons array it can be empty
@property (nonatomic) BOOL disableBackground;       //Disable background view, default is TRUE
@property int menuHeight;                           //height = width ,default is 65
@property IGCMenuBackgroundOptions backgroundType;  //Default is BlurEffectDark
@property IGCMenuPositionOptions positionStyle;    //Default is Top

-(void)showCircularMenu;
-(void)hideCircularMenu;

@end



