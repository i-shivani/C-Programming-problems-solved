#include<stdio.h>
int main()
{
	int x,factor,firstdigit,num,input;
	factor=1;
	printf("Enter a number:");
	scanf("%d",&x);
	firstdigit=x%10;
	input=x;
loop:if(x > 9)
	{
		x=x/10;
		factor=factor*10;
		goto loop;
	}
	num=input%factor-firstdigit + firstdigit*factor + x; 
	printf("%d",num);
}
