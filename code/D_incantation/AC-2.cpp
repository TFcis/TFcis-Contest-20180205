#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string a;
	cin>>a;
	string begin = "", end = "";
	vector<char> vec ; 
	
	begin += a[0];
	begin += a[1];
	begin += a[2];
	
	end += a[3] ;
	end += a[4] ;
	end += a[5] ;
	
	int k = 0;	char m ;
	
	for(int i = 6 ; i < a.length() ; i ++ ){
		
		if( a[i] >= 'A' && a[i] <= 'Z' ){
			
			for(int j = 0 ; j < max(1,k) ; j++){
				vec.push_back(m);
			}
//			cout<<k<<endl;
			k = 0 ;
			m = a[i] ;
			
		}else{
			k *= 10;
			k += a[i] - '0' ;
			if(k>10){
				k = 10 ;
			}
		}
	}
	for(int j = 0 ; j < max(1,k) ; j++){
		vec.push_back(m);
	}
	
//	for(int i = 0 ; i <vec.size(); i ++){
//		cout<<vec[i];
//	}
	bool spell = 0 ;
	int energy = 0;
	for(int i = 0 ; i < vec.size() - 2 ; i ++){
		string s = "" ;
		
		s+=vec[i];
		s+=vec[i + 1];
		s+=vec[i + 2];
		
		if(s == begin && !spell){
			spell = 1 ;
		}
		if(s == end && spell){
			spell = 0 ;
			energy++;
		}
	}
	cout<<energy<<endl;
} 
