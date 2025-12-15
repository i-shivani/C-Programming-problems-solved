#include<stdio.h>
int main()
{
	int x=1,y=0;
	while(x<6)
	{
		y+=x;
		x++;
	}
	printf("%d\n",y);
}