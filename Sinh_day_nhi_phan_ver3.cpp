#include <iostream>
#include <math.h>
using namespace std;
int arr[10]={0};
int n;
void print(int arr[], int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i];
	}
	cout<<"\n";
}
void nhiPhan()
{
	int i=0;
	while(1)
	{
		i++;
		print(arr,n);
		
		if(i==pow(2,n))
			return;
			
		int k=n;
		while(arr[k]!=0)
		{
			k--;
		}
		arr[k]=1;
		for(int j=k+1;j<=n;j++)
		{
			arr[j]=0;
		}
	}
}

int main()
{
	cin>>n;
	nhiPhan();
}
