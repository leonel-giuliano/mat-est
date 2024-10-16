#include <stdio.h>

#include "main.h"


errorEvent_t errorHandler(errorEvent_t e) {
    fprintf(stderr, "\nmat-est: ");

    switch (e) {
        case ERROR_GETOPT:
            fprintf(stderr, "an unkown option was used.\n");
            break;
    }

    return e;
}
