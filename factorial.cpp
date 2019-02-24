#include <iostream>
//#include <bits/stdc.h>
using namespace std;
void petturn(int n)
{
	int i=1,j=0;
	cin>>n;
	for(i=1;i<=n;)
	{
		if(j<i)
		{
			cout<<"*";
			j++;
			continue;
		}
		if(j==i)
		{
			cout<<"\n";
			i++;
			j=0;
		}
	}
}
int main()
{
	cout<<"enter he no \n";
	petturn(10);
	return 0;
}
