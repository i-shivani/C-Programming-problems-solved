#include<stdio.h>
void getnumbers(int *,int *,int *,int *,int *);
void addnumbers(int *,int *,int *,int *,int *, int *);
void print(int *,int *);
int main()
{
	int x[51],y[51],z[52],*px,*py,*pz,i,*pi,n1,n2,*pn1,*pn2;
	px=x;
	py=y;
	pz=z;
	pi=&i;
	pn1=&n1;
	pn2=&n2;
	getnumbers(px,py,pi,pn1,pn2);
	addnumbers(px,py,pz,pi,pn1,pn2);
	print(pz,pi);
}
void getnumbers(int *a,int *b,int *pi,int *pn1,int *pn2)
{
	int n;
	printf("Enter no.of digits in number1: ");
    scanf("%d",pn1);
    printf("Enter no.of digits in number2: ");
    scanf("%d",pn2);
    printf("\n");
    for(n=*pn1-1;n>=0;n--)
    {
        printf("Enter digit %d of 1st number: ",n+1);
        scanf("%d",a+n);
    }
    printf("\n");
	for(n=*pn2-1;n>=0;n--)
    {
        printf("Enter digit %d of 2nd number: ",n+1);
        scanf("%d",b+n);
    }
	if(*pn1 > *pn2)		
		*pi=*pn1;
	else
		*pi=*pn2;
}
void addnumbers(int *a,int *b,int *c,int *pi,int *pn1,int *pn2)
{
	int n,o,t;
    for(n=*pi-1;n>-1;n--)
    {
        o=0;
        t=0;
        if(*pn1>-1 && *pn2>-1)
            c[n+1]+=a[--(*pn1)]+b[--(*pn2)];
        else if((*pn1)>-1)
            c[n+1]+=a[--(*pn1)];
        else if((*pn2)>-1)
            c[n+1]+=b[--(*pn2)];
        if(c[n+1]>9)
        {
           o=c[n+1]%10;
           t=c[n+1]/10;
           c[n+1]=o;
           c[n]=t;
        }
    }
    c[0]=t;
}
void print(int *c,int *pi)
{
	int n;
	for(n=0;n<=*pi;n++)
        printf("%d",c[n]);
}
