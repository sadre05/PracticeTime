#include<stdio.h>
long factorial(int);
int main()
{
	int n;
	long f;
	scanf("%d",&n);
	if(n<0)
		printf("factorial of negative integers isn't \n");
	else
	{
		f=factorial(n);
		printf("%d! = %ld\n",n,f);
	}
	return 0;
}
long faactorial(int n)
{
	if (n==0)
	return 0;
	else
	return(n*factorial(n-1));
}
