//need to pass array size along with initial pointer cz initial pointer pass only index 0
//function cant return full array / string *** need dynamic memory allocation

#include<stdio.h>
void fun (int *arr,int s) //*arr or arr[]
{
 for(int i=0;i<s;i++) printf("%d",arr[i]); //arr[1] == 1[arr] == *(arr+1) == *(1+arr)
 //can change any index > will work as call by reference

}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size =sizeof(arr)/sizeof(int);
    fun(arr,size);
    return 0;
}