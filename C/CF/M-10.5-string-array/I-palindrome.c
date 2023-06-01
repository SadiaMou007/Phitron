#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],isP=0;
    scanf("%s",s);

    int i=0;
    int j=strlen(s)-1;
    
    while(i<j)
    {
        if(s[i]!=s[j]) isP=1;
        i++;
        j--;
    }
    if(isP==0) printf("YES\n");
    else printf("NO\n");

    return 0;
}