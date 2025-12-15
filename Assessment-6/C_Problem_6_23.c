#include<stdio.h>
int main()
{
	int x,n=0,y=0;
	printf("Enter a number: ");
	scanf("%d",&x);
    while(x*10/10 > 0)
    {
        n=0;
        while(n<4)
        {
    	    if(x%10 == n*n)
    	    {
    	        y++;
    	        n=3;
    	    }
    	    n++;
        }
	    x/=10;
    }
	printf("%d",y);
}