//
// Created by Ritik Narayan on 27-06-2023.
//
#include <stdlib.h>
#include <stdio.h>
#include "darray.h"
#define MAX_SIZE 20
darray* make_darray(int size){
    darray *init = (darray *) malloc(sizeof(darray));
    init->element = (void**) malloc(size*MAX_SIZE);
    init->size = 1;
    //printf("%d %d",(*init)->size,size);
    return init;
}

BOOL add(darray **arr,void* item,int size){
    if((*arr)->size<MAX_SIZE){
        (*arr)->element[(*arr)->size++] = item;
        return TRUE;
    }else{
        resize(&*arr);
        (*arr)->element[(*arr)->size++] = item;
    }
    return FALSE;
}
BOOL resize(darray **arr){
    darray *temp = (darray*) malloc(sizeof(darray));
    temp->element = (void**) malloc((*arr)->size*MAX_SIZE);
    for(int i=0;i<(*arr)->size;i++){
        temp->element[i] = (*arr)->element[i];
        temp->size++;
    }
    *arr = temp;
    return TRUE;
}

