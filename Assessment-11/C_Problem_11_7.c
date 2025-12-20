#include<stdio.h>
void memcomp(int *,int *,int);
int main()
{
	int x[5]={11,12,13,14,15},y[5]={11,12,13,16,15},*px,*py;
	px=x;
	py=y;
	memcomp(px,py,3);
}
void memcomp(int *a,int *b,int d)
{
	int i,c=0;
	for(i=0;i<d;i++)
		if(*(a+i) == *(b+i))
			c=1;
		else
		{
			c=2;
			i=5;
		}
	if(c==1)	
		printf("Success");
	if(c==2)
		printf("Failure");
}

