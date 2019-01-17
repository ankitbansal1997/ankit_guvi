#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int i,n;
	cin >> n;
	if(n>=59){
		int x=n%60;
		int y=n/60;
		cout << y << " "<< x;
	}
	else{
		cout << 0 << " " << n;
		
	}
	
}
