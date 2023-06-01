// insert element with existing values

#include<stdio.h>
int main()
{
    int n, pos,val;
    scanf("%d",&n);
    int arr[n+1]; //for insert one more element

    for(int i =0 ;i<n; i++) scanf("%d",&arr[i]); //array without last element
    
    scanf("%d %d",&pos, &val);  

    for(int i =n; i>=pos ;i--) //replace from last index to pos+1
    {
       arr[i]=arr[i-1];
    }
   arr[pos-1]=val;
    
    for(int i =0 ;i<n+1; i++)  printf("%d ",arr[i]);
    printf("\n");
    return 0;
}