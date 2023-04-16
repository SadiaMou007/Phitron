#include<stdio.h>
int main()
{
    int n,res=-1,x;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i <n;i++) scanf("%d",&arr[i]);
    
    scanf("%d",&x);
    for(int i =0;i <n;i++) {
        if(arr[i]==x) {
            res=i;
            break;
        }
    }
    printf("%d\n",res);
    return 0;
}