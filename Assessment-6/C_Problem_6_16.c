#include<stdio.h>
int main()
{
	int x,y=2;
	printf("Enter a number: ");
	scanf("%d",&x);
	while(y <= x/2)
	{
	    if(x%y == 0)
	    {
	        printf("Not Prime");
	        x=0;
	    }
	    y++;
	}
	if(x%y != 0 || x == 2)
	    if(x != 1)
	        printf("Prime");
}