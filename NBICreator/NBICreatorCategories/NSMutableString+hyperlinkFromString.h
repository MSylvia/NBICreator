//
//  NSMutableString+hyperlinkFromString.h
//  NBICreator
//
//  Taken from https://developer.apple.com/library/mac/qa/qa1487/_index.html
//

#import <Foundation/Foundation.h>

@interface NSAttributedString (NBCHyperlink)

+(id)hyperlinkFromString:(NSString*)inString withURL:(NSURL*)aURL;

@end
