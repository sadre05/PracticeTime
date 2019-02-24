#include<stdio.h>
int main()
{
	int a[15],i,sum=0,n;
	//int m;
	scanf("%d",&a[15]);
	//scanf("%d",&n);
	for(i=0;i<=a[15];i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}printf("%d",sum);
	return 0;
}
