#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    if(t >20000) printf("Gucci Bag\nGucci Belt\n");
    else if(t>=10000) printf("Gucci Bag\n");
    else if(t>=5000) printf("Levis Bag\n");
    else printf("Something\n");

    return 0;
}