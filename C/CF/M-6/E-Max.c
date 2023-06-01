#include <stdio.h>

int main()
{
   int num,max=0,a;
   scanf("%d",&num);
   for(int i=0;i<num;i++){
    scanf("%d",&a);
    if(a>max) max=a;
   }
   printf("%d\n",max);
   return 0;
} 