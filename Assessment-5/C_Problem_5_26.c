#include<stdio.h>
int main()
{
    int x,y;
    for(x=9999;x>999;x--)
        if(x%7==0 && x%9==0)
        {
            printf("%d",x);
            x=999;
        }
}