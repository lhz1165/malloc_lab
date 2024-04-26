#include "mm.h"
#include "memlib.h"
#include <stdio.h>

int main()
{
    mem_init();
    int mmres = mm_init();
    if (mmres==0)
    {
        int *p = (int *)mm_malloc(sizeof(int));
        *p=100;

        printf("hello world p= %d\n",*p);
                            
        mm_free(p);
    }
    
}
