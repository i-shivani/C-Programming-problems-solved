#include<stdio.h>
int main()
{
	int x,y=2,i;
	printf("Enter a number: ");
	scanf("%d",&x);
	i=x%100;
	while(y <= i/2)
	{
	    if(i%y == 0)
	    {
	        printf("Not Prime ");
	        i=0;
	    }
	    y++;
	}
	if(i%y != 0)
	        printf("Prime ");
}