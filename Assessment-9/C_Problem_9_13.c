#include<stdio.h>
int main()
{
    int n,x[n];
    x[0]=1;
    for(n=0;x[n]!=0;n++)
    {
        printf("Enter number%d: ",n+1);
        scanf("%d",&x[n+1]);
    }
    if(x[1] == x[4])
        printf("Success");
    else
        printf("Failure");
}