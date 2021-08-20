#include <iostream>
#include <math.h>
using namespace std;
int arr[50]={0};
int Phibo(int n)
{
	if(arr[n-1]==0)
		arr[n-1]=Phibo(n-1);
//	if(arr[n-2]==0)
//		arr[n-2]=Phibo(n-2);
	arr[n]=arr[n-1]+arr[n-2];
	return arr[n];	
}
int main()
{
	arr[1]=arr[2]=1;
	cout<<Phibo(8);
}
