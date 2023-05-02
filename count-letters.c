
#include<stdio.h>
int main()
{
    char s;
    int cnt[26]={0};
    while(scanf("%c",&s) != EOF)
    {

      cnt[s-'a']++;

    }

    for(int i=0;i <26; i++)
    {
        printf("%d ",cnt[i]);
    }

    return 0;
}
