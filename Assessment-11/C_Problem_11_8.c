#include<stdio.h>
void strcomp(char *,char *);
int main()
{
	char x[5]="Hello",y[5]="Hello",*px,*py;
	px=x;
	py=y;
	strcomp(px,py);
}
void strcomp(char *a,char *b)
{
	int i,c=0;
	for(i=0;i<5;i++)
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

