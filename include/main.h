#ifndef __MAT_EST_MAIN__
#define __MAT_EST_MAIN__


#include <stdint.h>


// ERROR EVENTS

typedef uint8_t errorEvent_t;
enum {
    ERROR_GETOPT
};


// Print error msg depending on the event
errorEvent_t errorHandler(errorEvent_t _Error);


#endif
