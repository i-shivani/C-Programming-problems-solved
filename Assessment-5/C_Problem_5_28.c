#include<stdio.h>
int main()
{
    int x,y,n,a,b=0,lcm=1,p;
    printf("Enter number1: ");
    scanf("%d",&x);
    printf("Enter number2: ");
    scanf("%d",&y);
    p=x*y;
    if(x>y)
        n=x;
    else
        n=y;
    for(a=n/2;a > 0;a--)
        if(x%a == 0 && y%a == 0 && b == 0)
        {
            lcm=p/a;
            b+=1;
        }
    printf("%d\n",lcm);
}