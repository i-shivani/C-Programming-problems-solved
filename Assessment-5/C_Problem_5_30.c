#include<stdio.h>
int main()
{
    int x,y,n,i,a,b=0;
    printf("Enter number1: ");
    scanf("%d",&x);
    printf("Enter number2: ");
    scanf("%d",&y);
    if(x>y)
        n=x;
    else
        n=y;
    for(a=n/2;a > 0;a--)
        if(x%a == 0 && y%a == 0 && b == 0)
        {
            printf("%d\n",a);
            b+=1;
        }
}