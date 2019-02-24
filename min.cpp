#include<stdio.h>
int main()
{
	int i,n,a[5],min=0,max=0;
	
	printf("\n enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements of the array:");
		scanf("%d",&a[i]);
		
		min=a[0];
		if(min<a[i])
		{
			min=a[i];
		}
	}
	printf("%d",min);
	return 0;
}
