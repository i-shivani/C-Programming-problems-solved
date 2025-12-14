#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&x);
	for(y=x%10;x/10 > 0;y+=x%10)
		x=x/10;
	printf("%d",y);
}
