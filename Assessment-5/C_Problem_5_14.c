#include<stdio.h>
int main()
{
	int x,y,i,f=1;
	printf("Enter a number:");
	scanf("%d",&x);
	i=x;
	for(y=x%10;x/10 > 0;f*=10)
		x=x/10;
	y=y*f + x + (i%f/10*10);
	printf("%d",y);
}
