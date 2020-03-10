/**
MIT License

Copyright (c) 2020 Scott Ban (https://github.com/reference/BDAddressPickerView.git)

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#import <UIKit/UIKit.h>
@protocol  BDAddressPickerViewDelegate <NSObject>
-(void)cancelBtnClick:(NSString *)titleAddress titleID:(NSString *)titleID;
@end
@interface BDAddressPickerView : UIView
@property(nonatomic,weak)id<BDAddressPickerViewDelegate>delegate1;
@property(nonatomic,assign)NSUInteger defaultHeight;
@property(nonatomic,assign)CGFloat titleScrollViewH;
@property(nonatomic,copy)NSString *title;
@property(nonatomic,strong)NSMutableArray *titleIDMarr;
@property(nonatomic,strong)UIView *addAddressView;
@property(nonatomic,assign)BOOL isChangeAddress; //这个属性如果是新增地址的时候设置成false
@property (nonatomic, assign) NSInteger level; //默认四级联动 
-(UIView *)initAddressView;
-(void)addAnimate;
@end
