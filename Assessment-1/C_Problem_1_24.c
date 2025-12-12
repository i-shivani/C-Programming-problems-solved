#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a 3 digit number : ");
	scanf("%d",&x);
	y=x - x/100*(x%10)%2*5;
	printf("Result = %d",y);
}
