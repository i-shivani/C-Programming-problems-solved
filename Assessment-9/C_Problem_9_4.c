#include<stdio.h>
int main()
{
    int x[5],n,s=0;
    for(n=0;n<5;n++)
    {
        printf("Enter number%d: ",n+1);
        scanf("%d",&x[n]);
    }
    s=x[0];
    for(n=1;n<5;n++)
        if(s < x[n])
            s=x[n];
    printf("Biggest=%d",s);
}
