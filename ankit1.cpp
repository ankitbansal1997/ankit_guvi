#include<iostream>
using namespace std;
int main(){
	char ch;
	cin >> ch;
	int i,j;
	if((ch>='a'&& ch <='z') || (ch>='A'&& ch <='Z')){
	
	i=(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )	;
	j=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' );
	   if(i||j)
{
	cout << "Vowel" << endl;
}
else{
	cout << "Consonant" << endl;
}}
else{
	cout << "invalid" << endl;
}


}
