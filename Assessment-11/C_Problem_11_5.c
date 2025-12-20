#include<stdio.h>
void memcopy(int *,int *);
int main()
{
	int x=10,*px,y,*py;
	px=&x;
	py=&y;
	memcopy(px,py);
}
void memcopy(int *a,int *b)
{
	printf("Before copying: %d, %d\n",*a,*b);
	*b = *a;
	printf("After copying: %d, %d",*a,*b);
}
