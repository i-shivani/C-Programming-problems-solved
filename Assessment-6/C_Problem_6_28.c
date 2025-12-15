#include<stdio.h>
int main()
{
	int x,y,n=0,a,lcm=1,p;
	printf("Enter number1: ");
	scanf("%d",&x);
	printf("Enter number2: ");
	scanf("%d",&y);
	p=x*y;
	if(x>y)
	    n=x;
	else
	    n=y;
	a=n/2;
    while(a>0)
    {
        if(x%a == 0 && y%a == 0)
        {
            lcm=p/a;
            a=1;
        }
        a--;
    }
    printf("%d\n",lcm);
}