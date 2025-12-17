#include<stdio.h>
int disp_sum_all_digits(int);
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=disp_sum_all_digits(x);
    printf("%d",y);
}
int disp_sum_all_digits(int a)
{
    int s=0;
    for(;a*10/10 > 0;a/=10)
            s+=a%10;
    return(s);
}