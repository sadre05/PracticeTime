#include<stdio.h>
int main()
{
	int x=10;
	static int y=10;
	x=x+1;
	y=y+1;
	printf("%d%d",x,y);
	return 0;
}
