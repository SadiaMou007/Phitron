#include<stdio.h>
#include<string.h>
int main()
{
    int n,cnt[10]={0};
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    for (int i=0;i<n;i++) cnt[a[i]]++;
    for (int i=0;i<10;i++) printf("%d : %d\n",i,cnt[i]);

    return 0;
}