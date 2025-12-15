#include<stdio.h>
int main()
{
	int x,y=0,l,m=1,i;
	printf("Enter a number: ");
	scanf("%d",&x);
	l=x%10;
	i=x;
	while(x>10)
	{
	    m*=10;
		x/=10;
	}
	y=l*m + i%m/10*10 + x; 
	printf("%d\n",y);	
}