#include<stdio.h>
int disp_single_digit_prime(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_single_digit_prime(x);
    printf("%d",y);
}
int disp_single_digit_prime(int a)
{
    int s,n=0,i;
    for(;a*10/10 > 0;a/=10) 
    {
	i=a%10;
	for(s=2;s <= i/2;s++)
	        if(i%s == 0)
		        i=0;
	if(i%s != 0 || i == 2)	
	       	if(i!=1)
		        n+=1;
    }
    return(n);
}