#include<stdio.h>
void disp_LCM2(int,int);
int main()
{
	int x,y;
	printf("Enter number1: ");
        scanf("%d",&x);
        printf("Enter number2: ");
        scanf("%d",&y);
	disp_LCM2(x,y);
}
void disp_LCM2(int x,int y)
{
    int n,a,lcm=1,p;
    p=x*y;
    if(x>y)
        n=x;
    else
        n=y;
    for(a=n/2;a > 0;a--)
        if(x%a == 0 && y%a == 0)
        {
            lcm=p/a;
            a=1;
        }
    printf("%d\n",lcm);
}