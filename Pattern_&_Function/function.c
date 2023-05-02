#include<stdio.h>

int har_to_ascii(char c) 
{
//return c-'A' + 97; //capital to small
return c-'a' + 65; //small to capital

}

int main()
{
    char n;
    scanf("%c",&n);
   
    printf("%c\n",har_to_ascii(n));

    return 0;
}