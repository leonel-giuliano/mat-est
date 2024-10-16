#ifndef __MAT_EST_MANAGE_H__
#define __MAT_EST_MANAGE_H__


#include "main.h"


// OPTION FLAGS

typedef flag8_t opFlags_t;

#define has_average flags.flag0
#define has_mean flags.flag1
#define has_median flags.flag2
#define has_mode flags.flag3
#define has_save flags.flag4
#define is_quantitative flags.flag5

#define FAVG 0x01
#define FMEAN 0x02
#define FMEDIAN 0x04
#define FMODE 0x08
#define FSAVE 0x10
#define FQNTV 0x20


// Read every argument and check the option flags
// Can return ERROR_GETOPT
errorEvent_t manage(int argc, char **argv, opFlags_t *_OptionFlags);


#endif
