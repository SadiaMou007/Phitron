#include<stdio.h>
void p(long long int *ar,int i,int n,long long int sum)
{
    
    if(i==n) {
        printf("%lld\n",sum);
        return;

    };
    sum += *(ar+i);
   
    p(ar,i+1,n,sum);

}
int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    long long int ar[n];
    for(int i=0;i<n;i++) scanf("%lld",&ar[i]);
    p(ar,0,n,sum);
    return 0;
}