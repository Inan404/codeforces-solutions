#include<bits/stdc++.h>
using namespace std ; 



int main(){

 	string a;  
 	int count = 0 ;
 	vector<int> nums; 
   
  	cin>>a; 

  	for(int i = 0 ; i < a.size();i++){
  		if(a[i] != '+'){
          nums.push_back(a[i]-48);

  		}
  	}
    
   //we sort a vectorm with sort(v.begin(), v.end());

   sort(nums.begin(),nums.end());

    for( int i = 0 ; i< nums.size();i++){
    	if(i!= nums.size()-1){
           cout<<nums[i]<<"+";
    	}
    	else{
    		cout<<nums[i]<<endl;
    	}
    }



	return 0 ; 
}