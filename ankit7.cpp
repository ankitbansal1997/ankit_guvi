#include <iostream>
using namespace std;
int main()
{
    int n,m,sum=0,a[100];
    cin >> n >> m;
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
	for(int i=0;i<m;i++){
		sum=sum+a[i];
	}
cout << sum << endl;
    return 0;
}
