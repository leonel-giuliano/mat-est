#include <unistd.h>
#include <getopt.h>

#include "main.h"
#include "manage.h"


errorEvent_t manage(int argc, char **argv, opFlags_t *opFlags) {
    const struct option options[] = {
        { "all", no_argument, 0, 'A' },
        { "average", no_argument, 0, 'a' },
        { "mean", no_argument, 0, 'm' },
        { "median", no_argument, 0, 'M' },
        { "mode", no_argument, 0, 'r' },
        { "save", required_argument, 0, 's' },
        { "quantitative", no_argument, 0, 'q' },
        { "qualitative", no_argument, 0, 'Q' }
    };

    char c;
    int opIx = 0;

    while((c = getopt_long(argc, argv, "AamMrs:", options, &opIx)) != -1) {
        switch (c) {
            case 'A':
                opFlags->data |= (FAVG | FMEAN | FMEDIAN | FMODE);
                break;

            case 'a':
                opFlags->has_average = 1;
                break;

            case 'm':
                opFlags->has_mean = 1;
                break;

            case 'M':
                opFlags->has_median = 1;
                break;

            case 'r':
                opFlags->has_mode = 1;
                break;

            case 'q':
                opFlags->is_quantitative = 1;
                break;

            case 'Q':
                opFlags->is_quantitative = 0;
                break;

            case '?': return errorHandler(ERROR_GETOPT);
        }
    }

    return 0;
}
