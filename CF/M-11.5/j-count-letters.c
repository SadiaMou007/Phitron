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
       if(cnt[i] != 0) printf("%c : %d\n",i+'a',cnt[i]);
    }

    return 0;
}