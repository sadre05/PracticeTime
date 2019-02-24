#include<iostream>
using namespace std;
int binaryDecimal(int n)
{
	int num=n;
	cin>>num;
	int a=0;
	int base=1;
	int temp=num;
	while(temp)
	{
		int l=temp%2;
		temp=temp/10;
		a=a+l*base;
		base=base*2;
	}
	return a;
}
int main()
{
	int num;
	cout<<"enter the no:"<<endl;
	cout<<binaryDecimal(num)<<endl;
}
