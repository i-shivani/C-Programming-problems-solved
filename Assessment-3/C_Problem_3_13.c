#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a 4 digit number:");
    scanf("%d",&x);
    if(x/10%10 == x%10)
        printf("Success");
    else
        printf("Failure");
}
