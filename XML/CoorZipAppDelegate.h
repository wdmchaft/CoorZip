//
//  CoorZipAppDelegate.h
//  CoorZip
//
//  Created by Kevin Ko on 6/20/11.
//  Copyright 2011 ChocoCodes Dev. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@interface CoorZipAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
	IBOutlet NSTextField *statusLabel;
	IBOutlet NSTextField *zipcodes;
	
	IBOutlet NSTextField *latitudeText;
	IBOutlet NSTextField *longitudeText;
	
	IBOutlet NSTextField *progressValue;
	
	IBOutlet NSButton *convertButton;
	int flag;
	
	NSString *directory;
	IBOutlet NSProgressIndicator *progress;
	IBOutlet NSButton *executeButton;
	IBOutlet NSButton *loadButton;
}
@property (nonatomic, retain) IBOutlet NSButton *convertButton;
@property (nonatomic, retain) IBOutlet NSTextField *progressValue;
@property (nonatomic, retain) IBOutlet NSTextField *latitudeText;
@property (nonatomic, retain) IBOutlet NSTextField *longitudeText;
@property (nonatomic, retain) IBOutlet NSButton *loadButton;
@property (nonatomic, retain) IBOutlet NSButton *executeButton;
@property (nonatomic, retain) IBOutlet NSProgressIndicator *progress;
@property (assign) IBOutlet NSWindow *window;
@property (nonatomic, retain) IBOutlet NSTextField *statusLabel;
@property (nonatomic, retain) IBOutlet NSTextField *zipcodes;
-(IBAction)parseIndividual:(NSButton *)button;
-(void)parseCSV:(NSString *)dir;
-(void)parseXML:(NSMutableDictionary *)dictionary;
-(void)parseXMLAdder:(NSString *)postal;
-(IBAction)openCSV:(NSButton *)button;
-(void)updateProgressText:(int)current max:(int)max;
-(IBAction)executeConversion:(NSButton *)button;
@end
