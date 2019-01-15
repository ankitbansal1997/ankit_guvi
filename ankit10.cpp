#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int i,x,n,a,c=0,sum=0;
	cin >> n;
	x=n;
while(x!=0){
	a=x%10;
	sum=sum*10+a;
	x=x/10;
}
if(n==sum)
cout << "yes";
else 
cout << "no";

}
