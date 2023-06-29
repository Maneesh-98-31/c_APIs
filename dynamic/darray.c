//
// Created by Maneesh Narayan on 27-06-2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "darray.h"
#define MAX_SIZE 10e7
darray* make_darray(darray **arr){
    *arr = (darray*) malloc(MAX_SIZE*sizeof(darray*));
    (*arr)->element = (void*) malloc(MAX_SIZE*sizeof (void*));
    (*arr)->size = 0;
    (*arr)->MAX = 10;
}

BOOL add(darray **arr,void* item,int i_size){
    //printf("%d\n",*(int*)item);
    if((*arr)->size<(*arr)->MAX){
        (*arr)->element[(*arr)->size] = (void*) malloc(i_size);
        memcpy((*arr)->element[(*arr)->size++],item,i_size);
        return TRUE;
    }else if((*arr)->MAX*(*arr)->size<MAX_SIZE){
        (*arr)->element = (void*) realloc((*arr)->element,(*arr)->size*(*arr)->MAX);
        (*arr)->MAX = (*arr)->size*(*arr)->MAX;
        (*arr)->element[(*arr)->size] = (void*) malloc(i_size);
        memcpy((*arr)->element[(*arr)->size++],item,i_size);
    }else printf("\nMemory out of bound\n");
    return FALSE;
}
uint32_t size(darray** arr){
    return (*arr)->size;
}

void* get_data(darray** arr,int idx){
    return (*arr)->element[idx];
}
BOOL set_data(darray** arr,int idx,void *item,int i_size){
    void *tt = (*arr)->element[idx];
    printf("%d <=> %d",*(int*)tt,*(int*)item);
    memcpy(tt,item,i_size);
    if(memcmp(tt,item,i_size)==0) return TRUE;
    printf("Data not set");
    return FALSE;
}

