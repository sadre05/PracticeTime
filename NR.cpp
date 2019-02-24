 #include<stdio.h>
 #include<math.h>
 float f(float x)
 {
 	float p = (3*x)-cos(x)-1;
 	return p;
 }
 float g(float x)
 {
 	float q = 3+ sin(x);
 	return q;
 }
 main()
 {
 	float a,b,h,x;
 	printf("Enter the value of a & b");
 	scanf("%f%f",&a,&b);
 	while(f(a)*f(b)>0)
 	{
 		a++;
 		b++;
	 }
	 x=a;
	 do{
	 	h=-(f(x)/g(x));
	 	x=x+h;
	 }
	 while(fabs(h)>0.00001);
	 
	 	printf("%0.5f",x);
	 
 }  //a=0; b= 1, e= 0.00001;
