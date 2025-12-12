#include<stdio.h>
int main()
{
	int x,y;
	y=2;
	printf("Enter a number:");
	scanf("%d",&x);
loop:if(y < x/2)
		if(x%y == 0)
			printf("Not Prime");
		else
		{
			y=y+1;
			goto loop;
		}
	else
		printf("Prime");
}
