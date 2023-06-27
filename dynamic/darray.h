//
// Created by Ritik Narayan on 27-06-2023.
//

#ifndef UNTITLED_DARRAY_H
#define UNTITLED_DARRAY_H
typedef enum{
    TRUE,FALSE
} BOOL;
typedef struct dynamic_array{
    void **element;
    int size;
}darray;
darray * make_darray(int size);
BOOL add(darray**,void*,int);
BOOL resize(darray**);
#endif //UNTITLED_DARRAY_H
