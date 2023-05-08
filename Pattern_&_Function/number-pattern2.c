#include<stdio.h>
int main()
{
    int n,s=1,k;
    scanf("%d",&n);
    k=n-1;
    for(int i=0;i<n ;i++){
       for(int j=0;j<k;j++) printf(" ");
       for(int j=1;j<=s;j++) printf("%d",i+1);
      
        s++;
        k--;
      
       printf("\n");
    }
    return 0;
}