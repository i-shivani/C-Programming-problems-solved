#include<stdio.h>
int disp_count_HCF2(int,int);
int main()
{
    int x,y,z;
    printf("Enter number1: ");
    scanf("%d",&x);
    printf("Enter number2: ");
    scanf("%d",&y);
    z=disp_count_HCF2(x,y);
    printf("%d",z);
}
int disp_count_HCF2(int a,int b)
{
    int n,c,hcf;
    if(a>b)
        n=a;
    else
        n=b;
    for(c=n/2;c > 0;c--)
        if(a%c == 0 && b%c == 0)
        {
            hcf=c;
            c=1;
        }
    return(hcf);
}