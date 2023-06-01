#include <stdio.h>

int main()
{
   long long int n,m,k,sum=0;
   scanf("%lld %lld %lld",&n,&m,&k);
   
   
    sum=(n<=m ? n<k ? n : k: m<k ? m: k);

    n -= sum;
    m -= sum;
    k -= sum;

    if(n ==0 || k ==0) sum +=0;
   else {
     if(n/2 <= k) sum += n/2;
    else sum += k;
   }

    printf("%lld\n",sum);


   return 0;
} 