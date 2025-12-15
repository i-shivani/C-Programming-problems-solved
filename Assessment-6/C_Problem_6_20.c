#include<stdio.h>
int main()
{
	int x=2,y,i,n=0;
	while(x<10)
	{
	    y=2;
    	while(y <= x/2)
    	{
    	    if(x%y == 0)
    	        x++;
    	    y++;
    	}
    	if(x%y != 0 || x == 2)
        {
           n+=1;
           x++;
	    }
    	x++;
	}
	printf("%d",n);
}