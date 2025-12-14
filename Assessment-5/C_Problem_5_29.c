#include<stdio.h>
int main()
{
    int x,y,z,n,a,b=0,lcm=1,p;
    printf("Enter number1: ");
    scanf("%d",&x);
    printf("Enter number2: ");
    scanf("%d",&y);
    printf("Enter number3: ");
    scanf("%d",&z);
    if(x>y)
        n=x;
    if(y>x)
        n=y;
    p=x*y;
    for(a=n/2;a > 0;a--)
    {
        if(x%a == 0 && y%a == 0 && b == 0)
        {
            lcm=p/a;
            b+=1;
        }
        if(a==1 && y!=z)
        {
            x=lcm;
            y=z;
            p=x*y;
            if(x>y)
                n=x;
            if(y>x)
                n=y;
            b=0;
            a=(n/2)+1;
        }
    }
    printf("%d\n",lcm);

}
