#include<stdio.h>
int disp_LCM2(int,int);
int main()
{
    int x,y,z;
    printf("Enter number1: ");
    scanf("%d",&x);
    printf("Enter number2: ");
    scanf("%d",&y);
    z=disp_LCM2(x,y);
    printf("%d",z);
}
int disp_LCM2(int a,int b)
{
    int n,c,lcm=1,p;
    p=a*b;
    if(a>b)
        n=a;
    else
        n=b;
    for(c=n/2;c > 0;c--)
        if(a%c == 0 && b%c == 0)
        {
            lcm=p/c;
            c=1;
        }
    return(lcm);
}