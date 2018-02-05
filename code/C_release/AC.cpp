// By xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
vector<long long> v;
long long a[5];
inline long long getb(long long x, long long y) {
	return y-a[0]*x*x*x*x*x
			-a[1]*x*x*x*x
			-a[2]*x*x*x
			-a[3]*x*x
			-a[4]*x;
}
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	long long N, K, x, y;
	while(cin>>K) {
		for(int q=0; q<5; q++) {
			cin>>a[q];
		}
		cin>>N;
		for(int q=0; q<N; q++) {
			cin>>x>>y;
			v.push_back(getb(x, y));
//			cout<<x<<" "<<y<<" "<<getb(x, y)<<endl;
		}
		sort(v.begin(), v.end());
		cout<<v[N-K]<<endl;
		
		v.clear();
	}
}

