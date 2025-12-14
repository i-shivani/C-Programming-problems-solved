#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a 4 digit number:");
	scanf("%d",&x);
	x=x%1000/10;
	for(y=2;y <= x/2;++y)
		if(x%y == 0)
		{
			printf("Not Prime");
			x=0;
		}
	if(x%y != 0 || x == 2 )
			printf("Prime");
}
