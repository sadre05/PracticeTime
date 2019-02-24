#include<stdio.h>
int main()
{
	int i,j,n,m=0,count=0;
	printf("enter the no");
	scanf("%d",&n);
	m=n/2;
	for(i=2;i<m;i++)
	{
		if(n%i==0)
		{
			printf("no");
			count=1;
	
			for(j=2;j<=i/2;j++)
				if(i%j==0)
				{
					count=count+1;
					break;
				}
			
		}
	}
	if(count==0 && i!=0)
	printf("prime no are=%d",i);
	return 0;
}
