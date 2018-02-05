// By xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
string roman(long long n) {
	string s="";
	for(char c='A'; n>0&&c<='Z'; c++) { 
		if(n&1) s+=c;
		n>>=1;
	}
	for(char c='a'; n>0&&c<='z'; c++) {
		if(n&1) s+=c;
		n>>=1;
	}
	return s;
}
long long arabic(string s) {
	long long r=0, b=1;
	int p=0;
	for(char c='A'; p<s.size()&&c<='Z'; c++) { 
		if(c==s[p]) {
			r+=b;
			p++;
		}
		b<<=1;
	}
	for(char c='a'; p<s.size()&&c<='z'; c++) {
		if(c==s[p]) {
			r+=b;
			p++;
		}
		b<<=1;
	}
	return r;
}
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	string s;
	while(cin>>s) {
		if(s[0]>='A') {
			cout<<arabic(s)<<endl;
		} else {
			cout<<roman(atoll(s.c_str()))<<endl;
		}
	}
}

