#include<stdio.h>
void p(int x,int y)
{
   (x!=y)? printf("%d ",x):printf("%d",x);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n ;i++) p(i,n);
    printf("\n");

    return 0;
}