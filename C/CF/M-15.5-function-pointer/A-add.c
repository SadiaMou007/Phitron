#include<stdio.h>
long long int sum(long long int x, long long int y)
{
    return x+y;
}

int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld\n",sum(a,b));
    return 0;
}