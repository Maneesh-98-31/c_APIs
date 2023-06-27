#include <stdio.h>
#include "dynamic/darray.h"
int main() {
    printf("Hello, World!\n");
    darray *arr = make_darray(sizeof(int));
    for(int i=0;i<10;i++){
        add(arr,(void*)i,sizeof(int));
    }
    int *ptr = (int*)arr->element;
    for(int i=0;i<10;i++) printf("%d\n",ptr[i]);
    return 0;
}
