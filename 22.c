#include<stdio.h>
#include<math.h>
float f(float x)
{
	float y=1/(1+x*x);
	return(y);
	clrscr();
}
void main()
{
	float a,b,h,x[15],y[15],val;
	int n,i;
	printf("\n enter the value of lower limit and upper limit and interval=");
	scanf("%f%f%d",&a,&b,&n);
	for(i=0;i<=n;i++)
	h=(b-a)/n;
	x[0]=a;
	for(i=0;i<=n;i++)
	{
		x[i]=a+ i*h;
		y[i]=f(x[i]);
	val=(h/3)*(y[0]+y[n]);
    }
	for(i=2;i<=n-2;i++)
	{
		val=val + (h/3)*(y[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		val=val + (h/3)*(y[i]);
	}
	printf("\n intigrated value of the function is =%f",val);
}
