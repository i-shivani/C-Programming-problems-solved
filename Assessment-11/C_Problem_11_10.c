#include<stdio.h>
void intcon(int *,int ,int *,int ,int *);
int main()
{
	int x[5]={10,11,12,13,14},y[5]={15,16,17},z[10],*px,*py,*pz,s1=5,s2=3;
	px=x;
	py=y;
	pz=z;
	intcon(px,s1,py,s2,pz);
}
void intcon(int *a,int na,int *b,int nb,int *c)
{
	int i,d=0;
	for(i=0;i<na;i++)
		*(c+i)=*(a+i);
	d=i;
	for(i=0;i<nb;i++)
	{
		*(c+d)=*(b+i);
		d++;
	}
	for(i=0;i<d;i++)
		printf("%d ",*(c+i));
}

