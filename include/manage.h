#ifndef __MAT_EST_MANAGE_H__
#define __MAT_EST_MANAGE_H__


#include "main.h"


// OPTION FLAGS

typedef flag8_t opFlags_t;

#define FAVG 0x01
#define FMEAN 0x02
#define FMEDIAN 0x04
#define FMODE 0x08
#define FSAVE 0x10
#define FQNTV 0x20

#define FALL (FAVG | FMEAN | FMEDIAN | FMODE)


// Read every argument and check the option flags
// Can return ERROR_GETOPT
errorEvent_t manage(int argc, char **argv, opFlags_t *_OptionFlags);


#endif
