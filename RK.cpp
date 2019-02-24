#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	float z=1+(exp(-pow(x,2)-pow(y,2)));
	return z;
}
main()
{
	float h,x[20],y[20],k,k1,k2,k3,k4;
	int n,i;
	printf("Enter the value of intervals,spacelength,x[0],y[0]");
	scanf("%d%f%f%f",&n,&h,&x[0],&y[0]);
	printf("\nx[i]\ty[i]");
	for(i=0;i<=n;i++)
	{
		k1=h*f(x[i],y[i]);
		k2=h*f(x[i]+h/2,y[i]+k1/2);
		k3=h*f(x[i]+h/2,y[i]+k2/2);
		k4=h*f(x[i]+h,y[i]+k3);
		k=(k1+2*k2+2*k3+k4)/6;
		y[i+1]=y[i]+k;
		x[i+1]=x[i]+h;
		printf("\n%f\t%f",x[i],y[i]);
	}
}
