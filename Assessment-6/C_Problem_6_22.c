#include<stdio.h>
int main()
{
	int x,n=0;
	printf("Enter a number: ");
	scanf("%d",&x);
    while(x>10)
    {
	    if(x%100%2 != 0)
	        n+=1;
	    x/=10;
    }
	printf("%d",n);
}