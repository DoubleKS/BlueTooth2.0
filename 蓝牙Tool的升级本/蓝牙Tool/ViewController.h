//
//  ViewController.h
//  蓝牙Tool
//
//  Created by doublek on 2017/4/26.
//  Copyright © 2017年 doublek. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreBluetooth/CoreBluetooth.h>

#define STEP @"FF06"
#define BUTERY @"FF0C"
#define SHAKE @"2A06"
#define DEVICE @"FF01"

@interface ViewController : UIViewController<CBCentralManagerDelegate,CBPeripheralDelegate>
{
    CBCentralManager *theManager;
    CBPeripheral *thePerpher;
    CBCharacteristic *theSakeCC;
}

@end

