#include<stdio.h>
int main()
{
	int x=11,y=0;
	while(x<100)
	{
	    y=x/10+x%10;
	    if(y == 7)
	        printf("%d\n",x);	
		x+=2;
	}
}