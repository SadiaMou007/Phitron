#include <stdio.h>

int main()
{
   int n,t;
   scanf("%d",&t);
   while(t>0)
   {
      scanf("%d",&n);
     do
      {
       printf("%d ",n % 10);
       n /= 10;
      }
      while(n>0);

       t--;
       printf("\n");
   }
   return 0;
} 