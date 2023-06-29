#include <stdio.h>
#include "dynamic/darray.h"
#include "dynamic/hash_set.h"
#include <stdint.h>
int main() {
    printf("Hello, World!\n");
    darray *arr = NULL;
    make_darray(&arr);
    for(int i=1;i<=15;i++){
        add(&arr,&i,sizeof (i));
    }
    printf("\n%d\n", size(&arr));
    for(int i=0;i<size(&arr);i++) printf("%d\n",*(int*) get_data(&arr,i));
    int rp = 100;
    printf("add 100 at index 10\n");
    set_data(&arr,10,&rp, sizeof (int));
    for(int i=0;i<size(&arr);i++) printf("%d iteration %d\n",*(int*) get_data(&arr,i),(i+1));
    printf("remove at index 10\n");
    remove_data(&arr,10);
    printf("size of array %d\n", size(&arr));
    for(int i=0;i<size(&arr);i++) printf("%d iteration %d\n",*(int*) get_data(&arr,i),(i+1));
    return 0;
}
