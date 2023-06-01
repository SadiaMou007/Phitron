#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    //address of arr(array name) & arr[0] same
    //next address value can get by +1
    printf("%d\n",*arr); //index 0 er value
    printf("%d\n",*(arr+1)); //index 1 er value


    //arr[1] == 1[arr] == *(arr+1) == *(1+arr)

    return 0;
}