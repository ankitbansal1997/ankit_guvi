#include <iostream>
#include <cmath>
using namespace std;
int main() {
   int i,n,m,c=0,x,a,sum=0;
  cin >>n >> m;
   
   for(i=n; i<=m; i++) {
      x = n;
      c=0;
      while (x != 0) {
         x =x/10;
         c++;
      }
      x = n;
      sum=0;
      while (x != 0) {
         a= x%10;
         sum = sum+ pow(a,c);
         x= x/10;
      }
      if (n==sum)
         cout << n <<" ";
        n++;
   }
   return 0;
}
