#include<stdio.h>
#include<string.h>
int main()
{
    int cnt[26]={0};
    char a[10001];
    scanf("%s",a);
    
    for (int i=0;i<strlen(a);i++) {
        cnt[a[i]-'a']++;
    }
   
    //print in alphabet order
    for (int i=0;i<26;i++) {
        printf("%c - %d\n",i+'a',cnt[i]);
    }

   

    return 0;
}