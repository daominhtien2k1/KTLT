#include <iostream>
using namespace std;
int n;
int Phibo(int n)
{
	if(n<=2)
		return 1;
	else
		return Phibo(n-1)+Phibo(n-2);
}
int main() 
{
	cin>>n;
	cout<<Phibo(n);
	return 0;
}
