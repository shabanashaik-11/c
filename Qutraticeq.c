#include <stdio.h>
#include<math.h>
int main() {
    int a,b,c,d;
    float r1,r2;
    printf("enter a b c values :");
    scanf ("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*b*c);
    if (d>0)
    {
     printf("roots are real and distinct ");
     r1=(-b+sqrt(a))/(2*a);
    r2=(-b-sqrt(a))/(2*a);
    printf("the roots are %f%f",r1,r2 );
}
else if (d<0)
{
    printf("roots are real and imaginary ");
}
    else 
    {
    printf(" roots are real and equal");
    r1=r2=-b/(2*a);
    }
return 0;
}
