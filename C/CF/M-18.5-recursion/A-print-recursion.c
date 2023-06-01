#include<stdio.h>
void p(int i,int n)
{
    if(i == n+1) return;
    p(i+1,n);

    printf("I love Recursion\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    p(1,n);
    return 0;
}