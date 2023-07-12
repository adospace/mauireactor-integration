#ifndef DXErrorSupport_h

@protocol DXErrorSupport

@property(nonatomic) BOOL hasError;
@property(nullable, nonatomic) NSString *errorText;
@property(nullable, nonatomic) NSString *helpText;
@property(nonatomic) BOOL reserveBottomTextLine;

@end


#define DXErrorSupport_h


#endif /* DXErrorSupport_h */
