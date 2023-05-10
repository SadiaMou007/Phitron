#include<stdio.h>
void p(int *ar,int n)
{
    
    if(n<0) return;
    printf("%d",*(ar+n));
    if(n > 1) printf(" ");
    p(ar,n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++) scanf("%d",&ar[i]);
    p(ar,n%2 ==0 ? n-2: n-1);
    return 0;
}