#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("enter your value");
	gets(a);
	if(a%2==0)
	{
			printf("\n Even");
	}
	else
		printf("\n Odd");
	puts(a);
	return 0;
}
