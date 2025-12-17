#include<stdio.h>
int count_total_digits(int);
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=count_total_digits(x);
    printf("%d",y);
}
int count_total_digits(int a)
{
    int s=0;
    for(;a*10/10 > 0;a/=10)
            s++;
    return(s);
}