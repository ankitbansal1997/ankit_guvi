#include<iostream>
#include<cmath>
using namespace std;
int main(){
int i,n,a[100],min;
cin >> n;
for	(i=0;i<n;i++){
	cin >> a[i];
}
min=a[0];
for	(i=0;i<n;i++){
	if(a[i]<min){
		min=a[i];
	}
}
cout << min;
}
