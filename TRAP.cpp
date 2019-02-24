#include<stdio.h>
#include<math.h>
float func(float x)
{
	float y = 1/(1+x*x);
	return y;
}
main()
{
	float a,b,h,s1,s2,val,x[20],y[20];
	int i,n;
	s2=0;
	scanf("%f%f%d",&a,&b,&n);
	h=(b-a)/n;
	for(i=0;i<=n;i++)
	{
		x[i]=a+i*h;
		y[i]=func(x[i]);
	}
	s1=y[0]+y[n];
	for(i=1;i<n;i++)
	{
		s2=s2+y[i];
	}
	val=(h/2)*(s1+2*s2);
	printf("%f",val);
	
}
