#include<stdio.h>

void fun (int *ptr){
    *ptr=50;
}

int main()
{
    int x=10;
    printf("%d\n",x); //output:10
    fun(&x);
    printf("%d\n",x); //output:50

    return 0;
}
//call by value: pass value as param, 2 independent variable store the value & not affected by each other
 //call by reference: pass address of a variable(a=10) as param > calling function receive address as a pointer value(* ptr) > dereference the changed value (*ptr=50) > main function can use the changed value (50)