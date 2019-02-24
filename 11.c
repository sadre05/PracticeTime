#include<stdio.h>
#include<math.h>
float f(float x)
{
	float y = 1/(1+x*x);
	return (y);
	clrscr();
}
void main()
{
	float a,b,h,x[15],y[15],val;
	int n,i;
	printf("\n enter the value of lower limit and upper limit and interval=");
	scanf("%f%f%d",&a,&b,&n);
	h=(b-a)/n;
	for(i=0;i<=n;i++)
	{
		x[i]=a +i*h;
		y[i]=f(x[i]);
	}
	val=val+(h/2)*(y[0]+ y[n]);
	for(i=1;i<=n-1;i++)
	{
		val=val+h*y[i];
	}
	printf("\n result of integration=%f",val);
}
