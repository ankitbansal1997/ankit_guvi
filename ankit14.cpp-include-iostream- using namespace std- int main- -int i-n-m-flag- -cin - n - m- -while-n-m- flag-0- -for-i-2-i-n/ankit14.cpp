#include<iostream>
using namespace std;
int main(){
	int i,n,m,flag;
	cin >> n >> m;
	while(n<m){
flag=0;
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout << n<<" " ;
		n++;
		
		
		
	}
}
