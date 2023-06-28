#include <stdio.h>
#include "dynamic/darray.h"
int main() {
    printf("Hello, World!\n");
    darray *arr = NULL;
    make_darray(&arr);
    for(int i=0;i<5;i++){
        add(&arr,&i,sizeof (i));
    }
    printf("\n%d\n",arr->size);
    for(int i=0;i<5;i++) printf("%d\n",(int*)arr->element[i]);
    return 0;
}
