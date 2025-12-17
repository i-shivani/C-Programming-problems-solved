#include<stdio.h>
int disp_single_digit_square(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_single_digit_square(x);
    printf("%d",y);
}
int disp_single_digit_square(int a)
{
    int s,n;
    for(s=0;a*10/10 > 0;a/=10)
	for(n=0;n<4;n++)
		if(a%10 == n*n)
			s++;
    return(s);
}