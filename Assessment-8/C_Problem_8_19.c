#include<stdio.h>
int disp_LCM3(int,int,int);
int main()
{
    int x,y,z,l;
    printf("Enter number1: ");
    scanf("%d",&x);
    printf("Enter number2: ");
    scanf("%d",&y);
    printf("Enter number3: ");
    scanf("%d",&z);
    l=disp_LCM3(x,y,z);
    printf("%d",l);
}
int disp_LCM3(int a,int b,int c)
{
    int n,d,lcm=1,p;
    if(a>b)
        n=a;
    else
        n=b;
    p=a*b;
    for(d=n/2;d > 0;d--)
    {
        if(a%d == 0 && b%d == 0)
        {
            lcm=p/d;
            d=1;
        }
        if(d==1 && b!=c)
        {
            a=lcm;
            b=c;
            p=a*b;
            if(a>b)
                n=a;
            else
                n=b;
            d=(n/2)+1;
        }
    }
    return(lcm);
}