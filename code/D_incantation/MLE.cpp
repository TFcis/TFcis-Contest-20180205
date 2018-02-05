// By xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	string s;
	while(cin>>s) {
		string s2="";
		string start = s.substr(0, 3);
		string end = s.substr(3, 3);
		int sz=s.size();
		if(s[sz-1]>='A') {
			s+='1';
			sz++;
		}
//		cout<<sz<<endl;
		s+='@';
		for(int q=6; q<sz; q++) {
//			cout<<q<<endl;
			if(s[q+1]>='@') { // single char
				s2+=s[q];
//				cout<<"1 "<<q<<" "<<s[q]<<endl;
			} else { // two or more number
				char c = s[q];
				long long k=0;
				for(;s[q+1] <= '9'; q++) {
					k*=10;
					k+=s[q+1]-'0';
					if(k>1e18) k/=10;
				}
//				cout<<k<<endl;
				s2+=string(k, c);
//				cout<<"3 "<<q<<" "<<s[q]<<endl;
			}
		}
//		cout<<start<<endl;
//		cout<<end<<endl;
//		cout<<s2<<endl;
//		return 0;
		sz = s2.size();
		bool on = false;
		int ans = 0;
		for(int q=0; q<sz-2; q++) {
			if(s2.substr(q, 3) == start) {
				on = true;
//				cout<<q<<endl;
			} else if(s2.substr(q, 3) == end) {
				if(on) {
					ans++;
					on = false;
//					cout<<q<<endl;
				}
			}
		}
		cout<<ans<<endl;
	}
}

