#include<stdio.h>
void strcopy(char *,char *);
int main()
{
	char x[]="Hello",y[6],*px,*py;
	px=x;
	py=y;
	strcopy(px,py);
}
void strcopy(char *a,char *b)
{
	int i;
	printf("Before copying: %s, %s\n",a,b);
	for(i=0;i<6;i++)
		*(b+i) = *(a+i);
	printf("After copying: %s, %s",a,b);
}

