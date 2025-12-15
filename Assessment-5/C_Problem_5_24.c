#include<stdio.h>
int main()
{
	int x,y,n;
	printf("Enter a number:");
	scanf("%d",&x);
	for(y=0;x/10 > 0;x/=10)
		for(n=0;n<10;n++)
			if(x%100 == n*n)
				y++;
	printf("%d",y);
}

