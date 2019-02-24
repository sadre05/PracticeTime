#include<stdio.h>
int main()
{
	int a[20],i,sum=0,sum1=0,sum2=0,n;
	printf("enter the array size \n");
	scanf("%d",&n);
	printf("enter the no \n");
	for(i=0;i<=n;i++)
	{	
		scanf("%d",&a[i]);
		if(i>=0 && i<3)
		{
			sum=sum+a[i];
		}
	}	printf("\nsum=%d",sum);
					
	for(i=0;i<=n;i++)
	{	
		 if(i>=3 && i<6)
			{
				sum1=sum1+a[i];
			}
	}		printf("\nsum1=%d",sum1);		
	for(i=0;i<=n;i++)
	{
		 if(i>=6)
			{
				sum2=sum2+a[i];
			}
	}		printf("\nsum2=%d",sum2);
				
		return 0;
}
