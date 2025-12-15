#include<stdio.h>
int main()
{
	int x,n=0,y=0;
	printf("Enter a number: ");
	scanf("%d",&x);
    while(x*10/10 > 0)
    {
        n=0;
        while(n<9)
        {
    	    if(x%100 == n*n)
    	    {
    	        y++;
    	        n=8;
    	    }
    	    n++;
        }
	    x/=10;
    }
	printf("%d",y);
}