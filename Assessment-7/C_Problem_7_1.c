#include<stdio.h>
void disp_assend(int);
int main()
{
	int x=1;
	disp_assend(x);
}
void disp_assend(int x)
{
   for(;x<6;x++) 
        printf("%d\n",x);
}
