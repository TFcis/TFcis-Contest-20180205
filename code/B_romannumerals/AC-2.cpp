#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	long long b = 0;
	cin>>a;
	if(a[0]<='9'){
		for(int i = 0 ; i < a.length() ; i++){
			b*=10;
			b+=a[i] - '0';
		}
		for(int i = 0 ; i<26 ; i++){
			if(b%2){
				char m = i+'A';
				cout<<m;
			}
			b/=2;
		}
		for(int i = 26 ; i<52 ; i++){
			if(b%2){
				char m = i+'a'-26;
				cout<<m;
			}
			b/=2;
		}
	}else{
		for(int i = 0 ; i < a.length() ; i++){
			if(a[i]<='z'&&a[i]>='a'){
				b += pow(2,a[i] - 'a' + 26); 
			}else{
				b += pow(2,a[i] - 'A'); 
			}
//			cout<<b<<endl;
		}
		cout<<b;
	}
	
	
}
