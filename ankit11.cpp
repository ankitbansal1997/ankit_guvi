#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int i,n,c=0;
	cin >> n;
for(i=2;i<=n/2;i++){
	if(n%i==0){
		c++;
	}}
if(c==0){
    cout << "yes";
}
else {
    cout << "no";
}
}
