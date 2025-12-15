#include<stdio.h>
void disp_single_digit_prime(int);
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	disp_single_digit_prime(x);
}
void disp_single_digit_prime(int x)
{
    int y,n=0,i;
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