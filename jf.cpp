#include<stdio.h>
int main()
{
	int i,j,n,m=0,count=0;
	m=n/2;
	printf("enter the no \n");
	scanf("%d",&n);
	
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
	
		printf("no");
		count=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				count=0;
				break;
			}
		}
	}}
	if(count==0)
	printf("yea");
	return 0;
}
