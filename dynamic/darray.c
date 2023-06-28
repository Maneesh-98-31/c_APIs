//
// Created by Ritik Narayan on 27-06-2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "darray.h"
#define MAX_SIZE 20
darray* make_darray(darray **arr){
    *arr = (darray*) malloc(MAX_SIZE*sizeof(darray*));
    (*arr)->element = (void*) malloc(MAX_SIZE*sizeof (void*));
    (*arr)->size = 0;
}

BOOL add(darray **arr,void* item,int size){
    if((*arr)->size<MAX_SIZE){
        (*arr)->element[(*arr)->size] = (void*) malloc(size);
        memcpy((*arr)->element[(*arr)->size],item,size);
        (*arr)->size++;
        return TRUE;
    }else{
        resize(&*arr);
        (*arr)->element[(*arr)->size] = (void*) malloc(size);
        memcpy((*arr)->element[(*arr)->size++],item,size);
    }
    return FALSE;
}
BOOL resize(darray **arr){
    printf("bitch ");
    printf("%x\n",&arr);
    printf("%x\n",*arr);
    printf("%x\n",**arr);
/*    darray *temp = (darray *) malloc(sizeof(darray));
    temp->element = (void**) malloc((*arr)->size*MAX_SIZE);
    for(int i=0;i<(*arr)->size;i++){
        temp->element[i] = (*arr)->element[i];
        temp->size++;
    }
    *arr = temp;*/
    return TRUE;
}

