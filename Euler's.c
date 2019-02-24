#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	float z;
	z=3*exp(x)+y;
	return z; 
}
void main()
{
	int i,n;
	float x[15],y[15],h,a,b;
	printf("\n enter the value of a,b,n and h=");
	scanf("%f%f%d%f",&a,&b,&n,&h);
	x[0]=a;
	y[0]=b;
	printf("x[i]\t\t y[i]");
	for(i=0;i<=n;i++)
	{
		x[i+1]=x[i]+h;
		y[i+1]=y[i]+h*f(x[i],y[i]);
		printf("\n%f\t%f",x[i],y[i]);
	}
	
}  //a=0 , b=1 ,n= 10 , h=0.1;

