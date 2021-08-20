#include <iostream>
using namespace std;
int arr[50];
int n;
void nhiPhan(int i)
{
	for(int j=0;j<=1;j++)
	{
		arr[i]=j;
		if(i==n)
		{
			for(int k=1;k<=n;k++)	cout<<arr[k];
			cout<<"\n";
		}
		else 
		{
			nhiPhan(i+1);
		}
	}
}
int main()
{
	cin>>n;
	nhiPhan(1);
}
