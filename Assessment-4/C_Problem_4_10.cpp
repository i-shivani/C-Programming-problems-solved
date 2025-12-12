#include<stdio.h>
int main()
{
	int x,sum;
	x=11;
	sum=0;
loop:if(x<100)
	{
		if(x/10 == 7)
			sum=sum+x;
		x=x+2;
		goto loop;
	}
	printf("%d",sum);
}
