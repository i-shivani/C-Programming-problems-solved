#include<stdio.h>
void strcon(char *,char *,char *);
int main()
{
	char x[6]="Hello ",y[5]="World",z[15],*px,*py,*pz;
	px=x;
	py=y;
	pz=z;
	strcon(px,py,pz);
}
void strcon(char *a,char *b,char *c)
{
	int i,d=0;
	for(i=0;i<6;i++)
		*(c+i)=*(a+i);
	d=i;
	for(i=0;i<5;i++)
	{
		*(c+d)=*(b+i);
		d++;
	}
	printf("%s",c);
}

