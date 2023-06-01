#include<stdio.h>
#include<string.h>
int main()
{
    char str[5],str1[5]; 
    scanf("%s %s",str,str1); 
    strcat(str,str1);
    printf("%s %s\n",str,str1);
   
    return 0;
}