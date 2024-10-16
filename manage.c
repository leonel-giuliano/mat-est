#include <unistd.h>
#include <getopt.h>


void manage(int argc, char **argv) {
    const struct option options[] = {
        { "all", no_argument, 0, 'A' },
        { "average", no_argument, 0, 'a' },
        { "mean", no_argument, 0, 'm' },
        { "median", no_argument, 0, 'M' },
        { "mode", no_argument, 0, 'r' },
        { "save", required_argument, 0, 's' }
    };
}
