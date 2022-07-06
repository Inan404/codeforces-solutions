#include<bits/stdc++.h>
using namespace std;


void capitalize(char &c){
	 if(c > 96){
      int val = c-96;
      c = val+64;
    }

}


int main(){
	string s;  
    cin>>s ; 
    capitalize(s[0]);
    cout<<s;

    return 0 ;

}