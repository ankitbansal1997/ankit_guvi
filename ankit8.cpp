#include<iostream>
using namespace std;
int main(){
	int i,n,x,c=0;
	cin >> n;
	while(n!=0){
		n=n/10;
		c++;
	}
	cout << c;
}
