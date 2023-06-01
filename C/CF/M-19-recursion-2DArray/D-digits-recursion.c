#include<stdio.h>
void fun(int n)
{
    if(n==0) return;
    fun(n/10);
    if(n  > 9) printf(" ");

    printf("%d",n%10);
   
}

int main()
{
    int t;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++) scanf("%d",&a[i]);
    for(int i=0;i<t;i++) {
        fun(a[i]);
        if(a[i]==0) printf("0");
        printf("\n");
    }
   
    return 0;
}