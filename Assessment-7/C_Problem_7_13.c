#include<stdio.h>
void disp_reverse_number(int);
int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	disp_reverse_number(x);
}
void disp_reverse_number(int x)
{
    int y=0;
    for(;x*10/10 > 0;x/=10)
            y=y*10+x%10;
    printf("%d\n",y);
}