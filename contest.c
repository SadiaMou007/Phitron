#include<stdio.h>
//cc
int main()
{
    int n,min,p=1;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i <n;i++) scanf("%d",&arr[i]);
    
     min=arr[0];

    for(int i =1;i <n;i++) 
            if(arr[i] < min)  {
                min = arr[i];
                p=i+1;
            }

     printf("%d %d\n",min,p);
    return 0;
}