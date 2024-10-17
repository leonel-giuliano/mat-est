#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>
#include <string.h>

#include "main.h"
#include "manage.h"
#include "data.h"


int main(int argc, char **argv) {
    uint8_t ret = 0;
    opFlags_t opFlags = { 0 };
    table_t table = { 0 };

    if(manage(argc, argv, &opFlags) != 0) return errorHandler(ERROR_GETOPT);

    printf("Amount of columns: ");
    scanf(" %hhu", &table.len);

    if((table.data = (data_t *)calloc(table.len, sizeof(data_t))) == NULL)
        return errorHandler(ERROR_NOMEM);


    free_data:
        free(table.data);

        return ret;
}


errorEvent_t errorHandler(errorEvent_t e) {
    fprintf(stderr, "\nmat-est: ");

    switch (e) {
        case ERROR_NOMEM:
            fprintf(
                stderr,
                "problem allocating: %s\n",
                strerror(errno)
            );

            break;

        case ERROR_GETOPT:
            fprintf(stderr, "an unkown option was used.\n");
            break;
    }

    return e;
}
