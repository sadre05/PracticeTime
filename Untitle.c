#include<stdio.h>
int main()
{
	int t,n;
	int i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<=n;i++)
		{
			if(n/5==0 || n/10==0)
			{
		
				print("yes");
			}
			else
			printf("no");
		
		}
	}return 0;
}
