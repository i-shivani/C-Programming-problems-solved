#include<stdio.h>
void getnumbers(int *,int *);
void multiplynumbers(int *,int *,int *);
void print(int *);
int nx,ny,nz;
int main()
{
	int x[51],y[51],z[100];
	getnumbers(x,y);
	multiplynumbers(x,y,z);
	print(z);
}
void getnumbers(int *x,int *y)
{
	int i,t=1;
	printf("Enter no.of digits in number 1: ");
	scanf("%d",&nx);
	printf("Enter no.of digits in number 2: ");
	scanf("%d",&ny);
	printf("\n");
	printf("Please enter number from R to L (LSB to MSB)\n\n");
	for(i=nx-1;i>=0;i--)
	{
		printf("Enter %d digit of number 1: ",t++);
		scanf("%d",&x[i]);
	}
	printf("\n");
	t=1;
	for(i=ny-1;i>=0;i--)
	{
		printf("Enter %d digit of number 2: ",t++);
		scanf("%d",&y[i]);
	}
	printf("\n");
}
void multiplynumbers(int *x,int *y,int *z)
{
	int *b,*s,i,t=1,ci,co,n,o,f;
	if(nx >= ny)	
	{
		b=x;
		s=y;
		co=ny;
		ci=nx;
	}
	else
	{
		b=y;
		s=x;
		co=nx;
		ci=ny;
	}
	nz=nx+ny;
	nz--;
	for(i=0;i<=nz;i++)
		z[i]=0;
	for(i=co-1;i>=0;i--)
	{
		f=nz;
		for(n=ci-1;n>=0;n--)
		{
			z[nz] =z[nz] + (b[n]*s[i]);
			if(z[nz] > 9)
			{
				o=z[nz]%10;
				t=z[nz]/10;
				z[nz]=o;
				z[nz-1]+=t;
			}
			nz--;
		}
		nz=f-1;
	}
}
void print(int *z)
{
	int i=0;
	if(z[0] == 0)
		i=1;
	for(;i<(nx+ny);i++)
        printf("%d",z[i]);
}
