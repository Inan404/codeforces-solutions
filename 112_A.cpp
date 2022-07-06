#include<bits/stdc++.h>
using namespace std; 

void toLower(string &str) { // pass by reference...
	for(int i = 0; i < str.size(); i++) {
		str[i] = tolower(str[i]);
	}
}

int main() {
   string a,b ;
   cin>>a>>b;

   toLower(a);
   toLower(b);

   if(a == b) {
   	cout << 0 << endl;
   } else if(a < b) {
   	cout << -1 << endl;
   } else {
   	cout << 1 << endl;
   }
  
	return 0 ; 
}