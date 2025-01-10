#include<stdio.h>
int main()
{
    int a[10],i,n,min,max;
    printf("enter size: ");
    scanf("%d",&n);
    printf("enter the element:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;++i)
    {
    if(a[i]>max)
    {
        max=a[i];
    }
    if(a[i]<min)
    {
        min=a[i];
    }
    }
    printf("the min is :%d\n", min);
    printf("the max is:%d\n",max);
     

    return 0;
}
