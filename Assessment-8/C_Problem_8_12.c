#include<stdio.h>
int disp_total_2digit_odd(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_total_2digit_odd(x);
    printf("%d",y);
}
int disp_total_2digit_odd(int a)
{
    int s;
    for(s=0;a/10 > 0;a/=10)
	if(a%100%2 != 0)
		s++;
    return(s);
}