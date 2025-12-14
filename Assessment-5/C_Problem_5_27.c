#include<stdio.h>
int main()
{
    int x,y,n=0,i;
    for(x=99999;x>50;x--)
    {
        i=x;
        for(y=0;(x*10/10)>0;x/=10)
            y=y+x%10;
        if(y==14) 
            n+=1;
        x=i;
    }
    printf("%d",n);
}