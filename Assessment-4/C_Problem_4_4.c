#include<stdio.h>
int main()
{
	int x,sum;
	x=6;
	sum=0;
loop:if(x>0)
	{
		sum=sum+x;
		x=x-1;
		goto loop;
	}
	printf("%d",sum);
}
