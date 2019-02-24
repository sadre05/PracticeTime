#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char a[100010];
int main()
{
	scanf("%s", a);
	int i,  n = 0;
	int c = 0, h = 0, e = 0, f = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'C')c++;
		if (a[i] == 'H'&&c > 0)
		{
			c--;
			h++;
		}
		if (a[i] == 'E'&&h > 0)
		{
			h--;
			e++;
		}
		if (a[i] == 'F'&& e > 0)
		{
			f++;
			e--;
		}
	}
	printf("%d\n", f);
	return 0;
}
