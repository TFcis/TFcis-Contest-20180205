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
		s+='@';
//		cout<<s<<endl;
		for(int q=6; q<sz; q++) {
			if(s[q+1]>='@') { // single char
				s2+=s[q];
//				cout<<"1 "<<q<<" "<<s[q]<<endl;
			} else if(s[q+2]>='@') { // one number
				if(s[q+1]=='1') {
					s2+=s[q];
//					cout<<"21 "<<q<<" "<<s[q]<<endl;
				} else if(s[q+1]=='2') {
					s2+=s[q];
					s2+=s[q];
//					cout<<"22 "<<q<<" "<<s[q]<<endl;
				} else {
					s2+=s[q];
					s2+=s[q];
					s2+=s[q];
//					cout<<"23 "<<q<<" "<<s[q]<<endl;
				}
			} else { // two or more number
				s2+=s[q];
				s2+=s[q];
				s2+=s[q];
//				cout<<"3 "<<q<<" "<<s[q]<<endl;
			}
			while(s[q+1] <= '9') q++;
		}
//		cout<<start<<endl;
//		cout<<end<<endl;
//		cout<<s2<<endl;
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

