#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    k=n;
    for(int i=0;i <n; i++)
    {
       for(int j=k; j >= 1; j--)
       {
        printf("*");
       }
       k--;
       printf("\n");

    }

    return 0;
}