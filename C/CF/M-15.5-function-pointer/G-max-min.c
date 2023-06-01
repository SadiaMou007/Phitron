#include<stdio.h>
void minMax(int *ptr,int n)
{
int min = *ptr;
int max =*ptr;

for(int i=1;i<n;i++)
{
    if(min > *(ptr+i)) min = *(ptr+i);
    else if(max < *(ptr+i)) max=*(ptr+i);
}
    printf("%d %d\n",min,max);

}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    minMax(&arr,n);

    return 0;
}