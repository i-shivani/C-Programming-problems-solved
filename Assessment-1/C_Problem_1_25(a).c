#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a 3 digit number: ");
	scanf("%d",&x);
	y=x%9;
	if(y == 0)
		printf("Result:9");
	else
		printf("Result:%d",y);
}
