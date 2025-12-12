#include<stdio.h>
int main()
{
	int x,factor,num,input;
	factor=1;
	printf("Enter a number:");
	scanf("%d",&x);
	input=x;
loop:if(x > 9)
	{
		x=x/10;
		factor=factor*10;
		goto loop;
	}
	if(x%2 != 0)
		x=x-1;
	num=x*factor + input%factor;
	printf("%d",num);
}
