#include <iostream>
using namespace std;

int n;
int X[100], Y[100]; 
int mark[100][100]; 


const int hx[] = {1, 1, 2, 2, -1, -1, -2, -2}; 
const int hy[] = {2, -2, 1, -1, 2, -2, 1, -1};


void print_sol(){
    for (int j = 1; j <= n * n; ++j)
        printf("(%d / %d %d)\n",j, X[j], Y[j]);
}


void TRY(int k){
	if(k==n*n+1)
	{
		print_sol();
		return;
	}
    for(int i = 0; i < 8; i++){
        int xx = X[k-1] + hx[i];
        int yy = Y[k-1] + hy[i];
      	if((mark[xx][yy]==0)&&(xx<=n)&&(xx>=1)&&(yy<=n)&&(yy>=1))
      	{
      		X[k]=xx;
      		Y[k]=yy;
      		mark[xx][yy]=1;
      		TRY(k+1);
      		mark[xx][yy]=0;
		}	
    }
}

int main(){
    cin >> n;
    mark[1][1] = 1;
    X[1] = Y[1] = 1;
    TRY(2);
    return 0;
}
