#include<stdio.h>
int disp_sum(int);
int main()
{
    int x=1,y;
    y=disp_sum(x);
    printf("%d",y);
}
int disp_sum(int a)
{
    int s=0;
    for(;a<6;a++)
        s+=a;
    return(s);
}
