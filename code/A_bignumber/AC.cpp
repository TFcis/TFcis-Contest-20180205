// By xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int hex2dec(char c) {
	if(c >= 'A') return c-'A'+10;
	return c-'0';
}
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	string a, b;
	while(cin>>a>>b) {
		unsigned int p = 0;
		bool leadzero = false;
		bool nooutput = true;
		if(a.size() > b.size()) {
			swap(a, b);
		}
		for(; p < b.size() - a.size(); p++) {
			cout<<b[p];
			nooutput = false;
			if(b[p] != '0') leadzero = true;
		}
		for(int q=0; p < b.size(); q++, p++) {
			if((hex2dec(a[q]) ^ hex2dec(b[p])) != 0) leadzero = true;
			if(leadzero) {
				cout<<hex<<uppercase<<( hex2dec(a[q]) ^ hex2dec(b[p]) );
				nooutput = false;
			}
		}
		if(nooutput) {
			cout<<0;
		}
		cout<<endl;
	}
}

