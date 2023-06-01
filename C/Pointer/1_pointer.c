#include<stdio.h>
int main()
{
    int x =10;
    int * ptr= &x; //can get value by dereferencing
    printf("Address of x: %p\n",&x);
    printf("Value of p: %p\n",ptr);

    printf("Value of x: %d\n",x);
    printf("Dereference value of ptr ->(x): %d\n",*ptr);

    //copy to another pointer
    int * ptr2 =ptr; //copy value of ptr(x er address)

    return 0;
}