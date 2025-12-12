#include<stdio.h>
int main()
{
	int x,y;
	y=1;
	printf("Enter a number:");
	scanf("%d",&x);
loop:if(x > 9)
	{
		y=y+1;
		x=x/10;
		goto loop;
	}
	printf("%d",y);
}
