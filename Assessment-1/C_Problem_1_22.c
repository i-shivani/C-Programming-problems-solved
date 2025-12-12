#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a number : ");
	scanf("%d",&x);
	y=x - x/10%10%2*5;
	printf("Result = %d",y);
}
