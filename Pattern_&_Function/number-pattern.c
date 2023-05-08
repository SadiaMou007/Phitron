#include<stdio.h>
int main()
{
    int n,s=1,k;
    scanf("%d",&n);
    k=n-1;
    for(int i=0;i<2*n -1 ;i++){
       for(int j=0;j<k;j++) printf(" ");
       for(int j=1;j<=s;j++) printf("%d",j);
       if(i < n-1){
        s += 2;
        k--;
       }
       else{
        s -= 2;
        k++;
       }
       printf("\n");
    }
    return 0;
}