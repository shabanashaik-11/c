#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;
    float avg;
    printf("enter size: ");
    scanf("%d",&n);
    printf("enter the element:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
    sum =sum+a[i];
    }
     avg =sum/n;
    printf("the sum is :%d\t", sum);
    printf("the avg is:%d\t",avg);

    return 0;
}
