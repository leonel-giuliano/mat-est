#include <unistd.h>
#include <getopt.h>

#include "main.h"


errorEvent_t manage(int argc, char **argv) {
    const struct option options[] = {
        { "all", no_argument, 0, 'A' },
        { "average", no_argument, 0, 'a' },
        { "mean", no_argument, 0, 'm' },
        { "median", no_argument, 0, 'M' },
        { "mode", no_argument, 0, 'r' },
        { "save", required_argument, 0, 's' }
    };

    char c;
    int opIx = 0;

    while((c = getopt_long(argc, argv, "AamMrs:", options, &opIx)) != -1) {
        switch (c) {
            case '?': return errorHandler(ERROR_GETOPT);
        }
    }

    return 0;
}
