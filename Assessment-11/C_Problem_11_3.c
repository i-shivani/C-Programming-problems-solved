#include<stdio.h>
void arrange_ascend(int *);
int main()
{
	int x=1,*p;
	p=&x;
	arrange_ascend(p);
}
void arrange_ascend(int *y)
{
	for(;*y<6;*y+=1)
		printf("%d\n",*y);
}
