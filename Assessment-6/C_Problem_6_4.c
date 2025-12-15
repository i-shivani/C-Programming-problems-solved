#include<stdio.h>
int main()
{
	int x=6,y=0;
	while(x>0)
	{
		y+=x;
		x--;
	}
	printf("%d\n",y);
}