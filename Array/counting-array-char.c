#include<stdio.h>
#include<string.h>
int main()
{
    int n,cnt[26]={0};
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    
    for (int i=0;i<n;i++) {
        cnt[a[i]-'a']++;
    }
   
    //print in alphabet order
    printf("According alphabet order:\n");
    for (int i=0;i<26;i++) {
        if(cnt[i] != 0){
            printf("%c : %d\n",i+'a',cnt[i]);
        }
    }

     //print in input order
    printf("According input order:\n");
    for (int i=0;i<n;i++) {
        if(cnt[a[i]-'a']!=0)
        {
         printf("%c : %d\n",a[i],cnt[a[i]-'a']);
         cnt[a[i]-'a']=0;
        }
    }

    return 0;
}