#include<stdio.h>
void d(int *n)
{
    int s=0, e=*n-1;
    for(int i=0;i<*n;i++)
    {
        for(int j=0; j<*n;j++)
        {
            if(s==e && j==*n/2) printf("X");
            else if(s==j) printf("\\");
            else if(j==e) printf("/");

            else printf("*");
        }
        printf("\n");
        s++;
        e--;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    d(&n);
    return 0;
}