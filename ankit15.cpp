#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int i,n,c=0,sum=0,x;
	cin >> n;
	x=n;
	while(x!=0){
		x=x/10;
		c++;
	}
	x=n;
while(x!=0){

	int a=x%10;
	sum=sum+pow(a,c);
	x=x/10;
}

if(sum==n)
cout << "yes";
else 
cout << "no";
}
