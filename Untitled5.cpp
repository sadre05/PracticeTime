#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,count=0;
	scanf("%s",& str[i]);
	for(i=0;i<=20;i++)
	{
		if(str[i]=='S' && str[i+1]=='A' && str[i+2]=='D' && str[i+3]=='R' && str[i+4]=='E')
		{
			count=count+1;
			if(count>6)
			{
				break;
			}
			}	
			}
	printf("%s",str[i]);
	return 0;
}
