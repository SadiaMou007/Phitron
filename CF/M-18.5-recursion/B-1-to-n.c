#include<stdio.h>
void p(int i,int n)
{
    if(i == n+1) return;
    printf("%d\n",i);

    p(i+1,n);

}
int main()
{
    int n;
    scanf("%d",&n);
    p(1,n);
    return 0;
}