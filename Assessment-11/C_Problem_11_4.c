#include<stdio.h>
void find_2digit_odd_sum7(int *);
int main()
{
	int x=10,*p;
	p=&x;
	find_2digit_odd_sum7(p);
}
void find_2digit_odd_sum7(int *y)
{
	int i=0;
	for(;*y<100;*y+=1)
	{
		i=*y/10 + *y%10;
		if(*y%2 == 1 && i == 7)
			printf("%d\n",*y);
	}
}
