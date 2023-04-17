#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000000];
    gets(a); 
  
  int i=0;
   while(a[i] != '\\')
   {
    printf("%c",a[i]);
    i++;

   }
    printf("\n");

    return 0;
}
