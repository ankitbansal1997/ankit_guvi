#include<iostream>
#include <cmath>
using namespace std;
int main(){
	int i,n,m,x=1;
	cin >> n >> m;
	for(i=1;i<=m;i++){
		x=pow(n,m);
	}
	cout << x;
	
}
