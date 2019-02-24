#include<stdio.h>
#include<math.h>
float func(float x,float y)
{
	float f=3*exp(x)+y;
	return f;
}
main()
{
	int i,n;
	float h,x[20],y[20],k;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("Enter the value of h,x[0]&y[0]");
	scanf("%f",&h);
	scanf("%f%f",&x[0],&y[0]);
	printf("value of x and y are-\n");
	for(i=0;i<=n;i++)
	{
		x[i]=x[0]+i*h;
		k=h*func(x[i],y[i]);
		y[i+1]=y[i]+k;
		
		printf("\n%f\t%f",x[i],y[i]);
	}
}
