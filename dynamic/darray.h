//
// Created by Maneesh Narayan on 27-06-2023.
//

#ifndef UNTITLED_DARRAY_H
#define UNTITLED_DARRAY_H

#include <stdint.h>

typedef enum{
    TRUE,FALSE
} BOOL;
typedef struct dynamic_array{
    void **element;
    int size;
    int MAX
}darray;
darray * make_darray(darray**);
BOOL add(darray**,void*,int);
uint32_t size(darray **);
void* get_data(darray**,int);
#endif //UNTITLED_DARRAY_H
