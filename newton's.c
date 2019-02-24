#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	float z;
	z= 3*x - cos(x) - 1;
	return(z);
}
float g(float x)
{
	float r=3 + sin(x);
	return(r);
}
void main()
{
	float a,b,h=1,x,e=0.00001;
	printf("\n enter the value of a,b =");
	scanf("%f%f%",&a,&b);
	while((f(a)*f(b))>0)
	{
		a++;
		b++;
	}
	x=a;
	do
	{
		h = -f(x)/g(x);
		x=x+h;
	}
	while(fabs(h)>0.00001);
	printf("the smallest positive root is \n");
	printf("%0.5f",x);
	getch();
}
	
