//
//  GBAPeer_Private.h
//  GBA4iOS
//
//  Created by Riley Testut on 9/15/14.
//  Copyright (c) 2014 Riley Testut. All rights reserved.
//

#import "GBAPeer.h"

@class CBPeer;
@class CBCharacteristic;

@interface GBAPeer ()

@property (copy, nonatomic, readwrite) NSString *name;
@property (assign, nonatomic, readwrite) NSInteger playerIndex;
@property (copy, nonatomic, readwrite) NSUUID *identifier;

@property (strong, nonatomic) CBPeer *bluetoothPeer; // May be nil if creating to be used by client (server)
@property (weak, nonatomic) CBCharacteristic *inputDataCharacteristic;
@property (weak, nonatomic) CBCharacteristic *outputDataCharacteristic;

- (instancetype)initWithBluetoothPeer:(CBPeer *)peer;

@end
