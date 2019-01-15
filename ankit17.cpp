#include<iostream>
using namespace std;
int main(){
	int i ,n,f=1;
	cin >> n;
	if(n==0){
		cout << 1;
	}
	else{
	
	for(i=1;i<=n;i++)
{
	f=f*i;
}
cout <<f;
}
}
