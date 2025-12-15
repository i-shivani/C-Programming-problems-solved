#include<stdio.h>
int main()
{
	int x,y,n,a;
	printf("Enter number1: ");
	scanf("%d",&x);
	printf("Enter number2: ");
	scanf("%d",&y);
	if(x>y)
	    n=x;
	else
	    n=y;
	a=n/2;
    while(a>0)
    {
        if(x%a == 0 && y%a == 0)
        {
            printf("%d\n",a);
            a=1;
        }
        a--;
    }
}