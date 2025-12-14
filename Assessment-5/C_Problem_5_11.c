#include<stdio.h>
int main()
{
	int x,n;
	printf("Enter a number:");
	scanf("%d",&x);
	for(n=1;x/10 > 0;n++)
		x=x/10;
	printf("%d",n);
}
