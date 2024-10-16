#ifndef __MAT_EST_MAIN_H__
#define __MAT_EST_MAIN_H__


#include <stdint.h>


// FLAGS

typedef union {
    struct {
        unsigned int flag0 : 1;
        unsigned int flag1 : 1;
        unsigned int flag2 : 1;
        unsigned int flag3 : 1;
        unsigned int flag4 : 1;
        unsigned int flag5 : 1;
        unsigned int flag6 : 1;
        unsigned int flag7 : 1;
    } flags;

    uint8_t data;
} flag8_t;


// ERROR EVENTS

typedef uint8_t errorEvent_t;
enum {
    ERROR_GETOPT
};


// Print error msg depending on the event
errorEvent_t errorHandler(errorEvent_t _Error);


#endif
