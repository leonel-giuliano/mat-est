#include <stdio.h>

#include "main.h"


errorEvent_t errorHandler(errorEvent_t e) {
    fprintf(stderr, "\nmat-est: ");

    switch (e) {
        case ERROR_GETOPT:
            fprintf(stderr, "problem reading the options.\n");
            break;
    }

    return e;
}
