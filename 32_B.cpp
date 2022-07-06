#include<bits/stdc++.h>
using namespace std;

void function(){
	
}

int main(){
	string input;
	cin>>input; 

	vector<int> result;

	for(int i=input.size();i>0;){
    	if(input[i]=='.'){
    	    	if(input[i-1]=='-'){
    			result.push_back(1);
    	    	i-=2;
    		}
    		else{
    			result.push_back(0);
    	    	i--;
    		}
    	}

    	else if(input[i]=='-'){
    			result.push_back(2);
    	    	i-=2;
    	}
	}

	for(int i = 0 ; i < result.size();i++){
		cout<<result[i];
	}
	cout<<endl;

	return 0;
}
