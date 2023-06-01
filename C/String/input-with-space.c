#include<stdio.h>
#include<string.h>

int main()
{
    char str[5]; //accept input of size 4
    //scanf("%s",str); //cant take space input
   // gets(str);
    fgets(str,5,stdin);

    printf("%s\n",str);
   
    return 0;
}