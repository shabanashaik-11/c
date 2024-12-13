#include <stdio.h>

int main() {
int n1,n2, rem, rev=0;
printf("enter the value of n2:");
scanf("%d",&n2);
n1=n2;
while (n1>0)
{
    rem=n1%10;
    rev=rev*10+rem;
    n1=n1/10;
}
if(n2==rev)
{
    printf("%d,is palindrome",n2);
    
}
else
{
    printf("%d,is not palindrome" ,n2);
    
}
return 0;
}

    
