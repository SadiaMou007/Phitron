#include<stdio.h>
#include<string.h>

int main()
{
    int n,i1=0,i2=0;
    scanf("%d",&n); 
    int a[n];
  
   for(int i=0;i<n;i++) scanf("%d",&a[i]); 

   int min=a[0];   
   int max=a[0];

   for(int i=1;i<n;i++) 
   {
    if(a[i]>max) 
    {
        max=a[i];
        i1=i;
    }
     if(a[i]<min) 
    {
        min=a[i];
        i2=i;
    }
   }

   a[i2]=max;
   a[i1]=min;

   for(int i=0;i<n;i++) printf("%d ",a[i]); 

    return 0;
}
