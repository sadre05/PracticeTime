#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	float z=1+exp(-(x*x+y*y));
	return (z);
	
}
void main()
{

	int i,n;
	float x[15],y[15],h,k1,k2,k3,k4,k;
	printf("\n enter the value of n and h=");
	scanf("%d%f",&n,&h);
	x[0]=0;
	y[0]=1;
	for(i=0;i<n;i++)
	{
		
		k1=h*f(x[i],y[i]);
		k2=h*f(x[i]+h/2,y[i]+k1/2);
		k3=h*f(x[i]+h/2,y[i]+k2/2);
		k4=h*f(x[i]+h,y[i]+k3);
		k=(k1+(2*k2)+(2*k3)+k4)/6;
		y[i+1]=y[i]+k;
		x[i+1]=x[i]+h;
	}
	for(i=0;i<=n;i++)
	{
	printf("x[%d]=%f\ty[%d]=%f\n",i,x[i],i,y[i]);

	}
}// n=10 , h=0.1

