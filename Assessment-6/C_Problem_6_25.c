#include<stdio.h>
int main()
{
	int x,n=0,y,i;
	printf("Enter a number: ");
	scanf("%d",&x);
    while(x*10/10 > 0)
    {
        i=x%10;
        y=2;
        while(y <= i/2)
        {
    	    if(i%y == 0)
    	        i=0;
    	    y++;
        }
        if(i%y != 0 || i == 2)
            if(i != 1)
                n++;
	    x/=10;
    }
	printf("%d",n);
}