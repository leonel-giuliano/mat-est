#ifndef __MAT_EST_DATA_H__
#define __MAT_EST_DATA_H__


#include <stdio.h>
#include <stdint.h>


// TEXT

#define DATA_LEN 50


// DATA STRUCT

typedef struct {
    char name[DATA_LEN];
    size_t frequency;
} data_t;

typedef struct {
    uint8_t len;
    data_t *data;
} table_t;


#endif
