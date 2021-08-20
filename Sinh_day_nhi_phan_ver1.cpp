#include <iostream>
using namespace std;
int arr[50];
void nhiPhan(int i,int n)
{
	if(i<n+1)
	{
		arr[i]=0;
		nhiPhan(i+1,n);
		arr[i]=1;
		nhiPhan(i+1,n);
	}
	if(i==n+1)
	{
		for(int j=1;j<=n;j++) cout<<arr[j];
		cout<<"\n";
	}
}
int main()
{
	nhiPhan(1,5);
}
