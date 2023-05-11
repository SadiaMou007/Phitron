#include<stdio.h>
int main()
{
    int n,d1=0,d2=0;
    scanf("%d",&n);
    int a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        {
            if(i == j) d1 += a[i][j];
            if(i+j == n-1) d2 += a[i][j];
        }
      
    }
    (d1-d2 > 0 ?  printf("%d\n",d1-d2):printf("%d\n",(d1-d2)*-1));
   
    return 0;
}