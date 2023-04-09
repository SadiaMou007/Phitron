#include <stdio.h>
int main()
{
   int num,v,even=0,pos=0,zero=0;
   scanf("%d",&num);
   for(int i= 0; i < num ; i ++) 
   {
       scanf("%d",&v);
       if(v % 2 == 0) even++;
       if(v > 0) pos++;
       if(v == 0) zero++;

   }
      printf("Even: %d\n",even);
      printf("Odd: %d\n",num - even);
      printf("Positive: %d\n",pos);
      printf("Negative: %d\n",num - (pos + zero));

    return 0;
} 