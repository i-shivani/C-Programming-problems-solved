#include<stdio.h>
int main()
{
	int x,y=2,i,s=0;
	printf("Enter a number: ");
	scanf("%d",&x);
	i=x;
	while(y <= x/2)
	{
	    if(x%y == 0)
	    {
	        printf("Not Prime ");
	        x=0;
	    }
	    y++;
	}
	if(x%y != 0 || x == 2)
	    if(x != 1)
	        printf("Prime ");
	while(i>0)
	{
	    s+=i%10;
		i/=10;
	}
	if(s == 14)
	    printf("& sum of digits is 14");
	else
	    printf("& sum of digits is not 14");
}