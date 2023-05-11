#include<stdio.h>
int main()
{
    int n,m,num,f=0;
    scanf("%d %d",&n,&m);
    int a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    scanf("%d",&num);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
        {
            if(a[i][j] == num) 
            {
                f=1;
                break;
            }

        }
    }
  
    (f ?  printf("will not take number\n"):printf("will take number\n"));
   
    return 0;
}