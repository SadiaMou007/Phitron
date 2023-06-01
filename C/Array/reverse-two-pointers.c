// insert element with existing values

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i =0 ;i<n; i++) scanf("%d",&arr[i]);

    //using while loop
    int i=0,j=n-1;
    while(i<j){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;
        j--;
    }
    
    //using for loop

    // int j=n-1;
    // for(int i =0; i<n/2 ;i++)
    // {
    //     int t=arr[i];
    //    arr[i]=arr[j];
    //    arr[j]=t;
    //    j--;
    // }
    
    for(int i =0 ;i<n; i++)  printf("%d ",arr[i]);
    printf("\n");
    return 0;
}