#include<stdio.h>
int main()
{
	int x,y=0;
	printf("Enter a number: ");
	scanf("%d",&x);
	while(x>0)
	{
	    y++;
		x/=10;
	}
	printf("%d\n",y);	
}