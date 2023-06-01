#include <stdio.h>
#include <string.h>
int is_palindrome(char *s) {
   int l = strlen(s);
   int i=0,j=l-1,result=1;
   while(i<j)
   {
     if(s[i] != s[j]){
       result=0;
       break;
     }
     i++;j--;
   }
   return result;
}
int main() {
   char s[1000];
   scanf("%s",s);
   (is_palindrome(s))? printf("Palindrome\n"):printf("Not Palindrome\n");
   return 0;
}
