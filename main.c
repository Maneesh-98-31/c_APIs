#include <stdio.h>
#include "dynamic/darray.h"
#include <stdint.h>
int main() {
    printf("Hello, World!\n");
    darray *arr = NULL;
    make_darray(&arr);
    for(int i=0;i<15;i++){
        add(&arr,&i,sizeof (i));
    }
    printf("\n%d\n", size(arr));
    for(int i=0;i<15;i++) printf("%d\n",*(int*) get_data(arr,i));
    return 0;
}
