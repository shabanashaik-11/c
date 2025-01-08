#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("enter size: ");
    scanf("%d",&n);
    printf("enter the element:");
    for(i=0;i<n;++i)
    {
        scanf("%d\t",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        printf("%d",a[i]);
    }
    return 0;
}
