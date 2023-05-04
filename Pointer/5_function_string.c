//function cant return full array / string ***
//no need to pass size 
//use strlen(s) to get length
#include <stdio.h>
    int main()
    {
        int ary[4] = {1, 2, 3, 4};
        int *p;
        p = ary + 3;
        printf("%d %d %d\n", ary,p,&ary[3]);

        *p = 5;
        printf("%d\n", ary[3]); //ouput > 5
    }

