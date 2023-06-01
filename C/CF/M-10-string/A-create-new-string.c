#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000],b[1000];
    scanf("%s %s",a,b); 
  
   int l1= strlen(a);
   int l2= strlen(b);

    printf("%d %d\n",l1,l2);
    printf("%s %s\n",a,b);

    return 0;
}
