#include<stdio.h>
void disp_total_1digit_prime(int);
int main()
{
	int x=2;
	disp_total_1digit_prime(x);
}
void disp_total_1digit_prime(int x)
{
    int y,n=0;
    for(;x<10;x++)
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