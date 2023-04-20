#include<stdio.h>
#include<string.h>

int main()
{
    char s1[11],s2[11],d[22];
    scanf("%s %s",s1,s2);

    printf("%d %d\n",strlen(s1),strlen(s2));

    strcpy(d,s1);
    printf("%s\n",strcat(d,s2));

    char c= s1[0];
    s1[0]=s2[0];
    s2[0]=c;

    printf("%s %s\n",s1,s2);

    return 0;
}