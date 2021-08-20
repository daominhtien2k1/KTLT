#include <iostream>
using namespace std;
int arr[50];
void nhiPhan(int i,int n)
{
	for(int j=0;j<=1;j++)
	{
		arr[i]=j;
		if(i<n)												
			nhiPhan(i+1,n);
		else if(i==n)
		{
			for(int k=0;k<n;k++)
				cout<<arr[k];
			cout<<"\n";
		}
		else 
			return;
	}
}
int main()
{
	nhiPhan(0,5);
}
