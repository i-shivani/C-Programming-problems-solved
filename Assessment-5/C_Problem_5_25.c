#include<stdio.h>
int main()
{
	int x,y,n=0,i;
	printf("Enter a number: ");
	scanf("%d",&x);
	for(;x*10/10 > 0;x/=10) 
	{
	    i=x%10;
	    for(y=2;y <= i/2;y++)
	        if(i%y == 0)
		    i=0;
	    if(i%y != 0 || i == 2)	
	       	if(i!=1)
		    n+=1;
	}
	printf("%d",n);
}