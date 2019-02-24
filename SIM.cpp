#include<stdio.h>
#include<math.h>
float func(float l)
{
	float m = 1/(exp(pow(l,3)));
	return m;
}
main()
{
	int i,n;
	float a,b,h,sum1,sum2=0,sum3=0;
	float x[20],y[20];
	scanf("%f%f%d",&a,&b,&n);
	h=(b-a)/n;
	for(i=0;i<=n;i++)
	{
		x[i]=a+i*h;
		y[i]=func(x[i]);
	}
	sum1=((h/3)*(y[0]+y[n]));
	for(i=1;i<=n-1;i=i+2)
	sum2+=((h/3)*4*(y[i]));
	for(i=2;i<=n-2;i=i+2)
	sum3+=((h/3)*2*(y[i]));
	printf("%f",sum1+sum2+sum3);
}
