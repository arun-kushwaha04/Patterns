/*
OBJECTIVE

for n=6

1
22
333
4444
55555
666666

*/

#include<iostream>

using namespace std;

int main()
{
	int n,a=0;
	cout<<"Enter number of rows : ";
	cin>>n;
	for(int i=1; i<=n; ++i)
	{
		a=i;
		for(int j=1; j<=i; ++j)
		{
			cout<<a;
		}
		cout<<endl;	
	}	

	return 0;

}