#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&x);
	for(y=0;x/10 > 0;x/=10)
		if(x%100%2 != 0)
			y++;
	printf("%d",y);
}
