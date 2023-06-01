#include<stdio.h>
int main()
{
    int n,m,o;
    scanf("%d",&n);
    int arr1[n];
    scanf("%d",&m);
    int arr2[m];
    
    int arr3[m+n];


    for(int i =0 ;i<n; i++) scanf("%d",&arr1[i]);
    for(int i =0 ;i<m; i++) scanf("%d",&arr2[i]);

    //copy first array
    for(int i =0 ;i<n; i++) arr3[i]=arr1[i];

    //copy second array
    int l=n;
    for(int i =0 ;i<m; i++) 
    {
        arr3[l]=arr2[i];
        l++;
    }
    
    for(int i =0 ;i<n+m; i++)  printf("%d ",arr3[i]);
    printf("\n");
    return 0;
}