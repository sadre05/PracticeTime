#include<stdio.h>
int main()
{
	int n,r,sum;
	printf("\n enter the no");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=n*10+r;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
