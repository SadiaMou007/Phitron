#include<stdio.h>
void sort(int *ptr)
{
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++)
        {
            if(*(ptr+i) > *(ptr+j))
            {
                int t=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=t;
            }
        }
    }
    for(int i=0;i<3;i++) printf("%d\n",*(ptr+i));

}
void p(int *ptr)
{
    int a=*ptr;
    int b=*(ptr+1);
    int c=*(ptr+2);

    sort(ptr);
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

}
int main()
{
    int arr[3];
    for(int i=0;i<3;i++) scanf("%d",&arr[i]);
    p(&arr);
    return 0;
}