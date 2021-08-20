#include <iostream>
#include <math.h>
using namespace std;
int x=1,y=1,z;
int Phibo(int n)
{
	for(int i=3;i<=n;i++)
	{
		z=x+y;
		x=y;
		y=z;
	}
	return z;
}
int main() // 1 1 2 3 5 8 13 21
{
	cout<<Phibo(8);
}
