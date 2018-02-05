// By xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
vector<long long> v;
long long a[5];
inline long long cal(long long x, long long b) {
	return b+a[0]*x*x*x*x*x
			+a[1]*x*x*x*x
			+a[2]*x*x*x
			+a[3]*x*x
			+a[4]*x;
}
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	long long N, K, x, y, b;
	while(cin>>K) {
		assert(K<=1000000);
		cout<<"K="<<K<<endl;
		for(int q=0; q<5; q++) {
			cin>>a[q];
			assert(a[q]<=200);
			assert(a[q]>=-200);
		}
		cin>>b;
		cin>>N;
		int ans =0;
		for(int q=0; q<N; q++) {
			cin>>x>>y;
			long long t = cal(x, b);
			if(y>=t) ans++;
			if(y==t)cout<<x<<" "<<y<<endl;
//			cout<<x<<" "<<y<<" "<<getb(x, y)<<endl;
		}
//		sort(v.begin(), v.end());
		cout<<ans<<endl;
		
//		v.clear();
	}
}

