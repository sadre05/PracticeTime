#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n)
		if(n%10==0)
		{
			printf("%d",0);	
		}
		else if(n%5==0)
		printf("%d",1);
		else 
		printf("%d",-1);
	}
	return 0;
}
