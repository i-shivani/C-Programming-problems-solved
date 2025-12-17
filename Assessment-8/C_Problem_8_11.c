#include<stdio.h>
int disp_total_odd_digits(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_total_odd_digits(x);
    printf("%d",y);
}
int disp_total_odd_digits(int a)
{
    int s;
    for(s=0;a*10/10 > 0;a/=10)
	if(a%10%2 != 0)
		s++;
    return(s);
}