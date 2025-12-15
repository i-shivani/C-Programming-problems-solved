#include<stdio.h>
int main()
{
	int x=10,y=0;
	while(x<100)
	{
	    if(x%10 == 5)
	        y+=x;
		x++;
	}
	printf("%d\n",y);	
}