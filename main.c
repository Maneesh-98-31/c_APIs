#include <stdio.h>
#include "dynamic/darray.h"
int main() {
    printf("Hello, World!\n");
    darray *arr = make_darray(sizeof(int));
    for(int i=0;i<25;i++){
        add(&arr,(void*)i,sizeof(int));
    }
    printf("\n%d\n",arr->size);
    for(int i=0;i<25;i++) printf("%d\n",(int*)arr->element[i]);
    return 0;
}
