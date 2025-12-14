#include<stdio.h>
int main()
{
	int x,y,n;
	printf("Enter a number:");
	scanf("%d",&x);
	for(y=0;x*10/10 > 0;x/=10)
		for(n=1;n<4;n++)
			if(x%10 == n*n)
				y++;
	printf("%d",y);
}
