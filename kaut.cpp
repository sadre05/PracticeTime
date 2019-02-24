#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int t,a[100];
cin>>t;
for(int i=0;i<t;i=i+1) 
{	int n,l;
	cin>>n>>l;
for(int j=0;j<n;j=j+1) 
{
	cin>>a[j];
}
sort(a,a+n);
for(int j=n-1;j>l;j=j-1)
{
cout<<" "<<a[j]; 
}
}
return 0;
}


