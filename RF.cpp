#include<stdio.h>
#include<math.h>
float f(float x)
{
	float p = log(2*(x+1))-x;
	return p;
}
main()
{
	float a,b,h,x;
	printf("Enter the value of a & b");
	scanf("%f%f",&a,&b);
	while((f(a)*f(b))>0)
	{
		a++;
		b++;
	}
	x=a;
	do{
		h=(((b-a)/(f(b)-f(a)))*f(a));
		x=a-h;
		if((f(a)*f(x))>0)
		b=x;
		else
		a=x;
	}
	while(fabs(h)>0.00001);
	printf("%0.5f",x);
}
