#include<stdio.h>
int main(void)
{
	int i,n,sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
		printf("%d",sum);
	return 0;
}
