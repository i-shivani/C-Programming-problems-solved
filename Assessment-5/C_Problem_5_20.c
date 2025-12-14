#include<stdio.h>
int main()
{
	int x,y,n=0;
	for(x=2;x<10;x++)
	{
		for(y=2;y <= x/2;y++)
			if(x%y == 0)
				x++;
		if(x%y != 0 || x == 2 )
		{
			n+=1;
			x++;
		}
	}
	printf("%d",n);
}
