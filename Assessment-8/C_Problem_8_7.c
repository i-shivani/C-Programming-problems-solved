#include<stdio.h>
int disp_reverse_number(int);
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=disp_reverse_number(x);
    printf("%d",y);
}
int disp_reverse_number(int a)
{
    int s=0;
    for(;a*10/10 > 0;a/=10)
            s=s*10+a%10;
    return(s);
}