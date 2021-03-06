/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipInflateReadChannel : NSObject <TSUStreamReadChannel> {
    unsigned int _CRC;
    char *_outBuffer;
    unsigned long _outBufferSize;
    <TSUStreamReadChannel> *_readChannel;
    unsigned long _remainingUncompressedSize;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned int total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned int total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned int adler; 
        unsigned int reserved; 
    } _stream;
    BOOL _validateCRC;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (void)handleFailureWithHandler:(id /* block */)arg1 error:(id)arg2;
- (id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long)arg2 CRC:(unsigned int)arg3 validateCRC:(BOOL)arg4;
- (void)prepareBuffer;
- (BOOL)processData:(id)arg1 inflateResult:(int*)arg2 CRC:(unsigned int*)arg3 isDone:(BOOL)arg4 handler:(id /* block */)arg5;
- (void)readWithHandler:(id /* block */)arg1;

@end
