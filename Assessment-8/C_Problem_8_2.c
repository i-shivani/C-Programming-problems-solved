#include<stdio.h>
int disp_rsum(int);
int main()
{
    int x=6,y;
    y=disp_rsum(x);
    printf("%d",y);
}
int disp_rsum(int a)
{
    int s=0;
    for(;a>0;a--)
        s+=a;
    return(s);
}