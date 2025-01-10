#include<stdio.h>
int main()
{
    int a[10],i,n,b[10];
    printf("enter size: ");
    scanf("%d",&n);
    printf("enter the element:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<n;++i)
    {
       b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
       printf("%d\t",b[i]);
    }
    
         return 0;
   }  
