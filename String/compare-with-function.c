#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100]; 
    scanf("%s %s",a,b); 
    int i=strcmp(a,b);

    if(i<0) printf("A small");
    else if(i>0) printf("B small");
    else printf("Equal");

    return 0;
}