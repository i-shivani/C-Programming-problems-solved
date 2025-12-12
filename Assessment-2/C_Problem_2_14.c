#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a 4 digit number : ");
	scanf("%d",&x);
	y= x%100 == x/100;
	printf("Result = %d",y);
}
