#include<stdio.h>
int main()
{
	int x=11,y=0;
	while(x<100)
	{
	    if(x/10 == 7)
	        y+=x;
		x+=2;
	}
	printf("%d\n",y);	
}