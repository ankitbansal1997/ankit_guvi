#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int i,n,a[100];
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		cout << a[i] << " " << i << endl;
	}
}
