#include<stdio.h>
int main()
{
	int x,y=0,m=1;
	printf("Enter a number: ");
	scanf("%d",&x);
	y=x;
	while(x>10)
	{
	    m*=10;
		x/=10;
	}
	if(x%2 != 0)
	   y=y%m + (x-1)*m;
	printf("%d\n",y);	
}