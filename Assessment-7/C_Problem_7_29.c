#include<stdio.h>
void disp_LCM3(int,int,int);
int main()
{
	int x,y,z;
	printf("Enter number1: ");
        scanf("%d",&x);
        printf("Enter number2: ");
        scanf("%d",&y);
        printf("Enter number3: ");
        scanf("%d",&z);
	disp_LCM3(x,y,z);
}
void disp_LCM3(int x,int y,int z)
{
    int n,a,lcm=1,p;
    if(x>y)
        n=x;
    if(y>x)
        n=y;
    p=x*y;
    for(a=n/2;a > 0;a--)
    {
        if(x%a == 0 && y%a == 0)
        {
            lcm=p/a;
            a=1;
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
            a=(n/2)+1;
        }
    }
    printf("%d\n",lcm);
}