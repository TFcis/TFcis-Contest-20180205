// By xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int m[1001][1001];
int dp[1001][1001];
//bool cald[1001][1001];
int H, W, X, Y;
void ans2(int x1, int y1, int x2, int y2, int nown);
void ans3(int x1, int y1, int x2, int y2, int nown);
void ans4(int x1, int y1, int x2, int y2, int nown);
void ans1(int x1, int y1, int x2, int y2, int nown) { // down
//	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	int now[H+1];
	now[x1-1] = nown;
	for(int q=x1; q<=x2; q++) {
		now[q] = now[q-1]+m[q][y1];
		dp[q][y1] = min(dp[q][y1], now[q]);
		if(q == X && y1 == Y) return;
	}
	for(int q=X; q<=x2; q++) {
		ans2(x1, y1+1, q, y2, now[q]);
	}
}
void ans2(int x1, int y1, int x2, int y2, int nown) { // right
//	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	int now[W+1];
	now[y1-1] = nown;
	for(int q=y1; q<=y2; q++) {
		now[q] = now[q-1]+m[x2][q];
		dp[x2][q] = min(dp[x2][q], now[q]);
		if(x2 == X && q == Y) return;
	}
	for(int q=Y; q<=y2; q++) {
		ans3(x1, y1, x2-1, q, now[q]);
	}
}
void ans3(int x1, int y1, int x2, int y2, int nown) { // top
//	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	int now[H+1];
	now[x2+1] = nown;
	for(int q=x2; q>=x1; q--) {
		now[q] = now[q+1]+m[q][y2];
		dp[q][y2] = min(dp[q][y2], now[q]);
		if(q == X && y2 == Y) return;
	}
	for(int q=X; q>=x1; q--) {
		ans4(q, y1, x2, y2-1, now[q]);
	}
}
void ans4(int x1, int y1, int x2, int y2, int nown) { // left
//	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	int now[W+1];
	now[y2+1] = nown;
	for(int q=y2; q>=y1; q--) {
		now[q] = now[q+1]+m[x1][q];
		dp[x1][q] = min(dp[x1][q], now[q]);
		if(x1 == X && q == Y) return;
	}
	for(int q=Y; q>=y1; q--) {
		ans1(x1+1, q, x2, y2, now[q]);
	}
}
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	while(cin>>H>>W>>X>>Y) {
		fill(&dp[0][0], &dp[0][0]+sizeof(dp)/sizeof(int), 2147483647);
		dp[0][1] = 0;
		for(int q=1; q<=H; q++) {
			for(int w=1; w<=W; w++) {
				cin>>m[q][w];
			}
		}
//		cout<<"exit is "<<X<<" "<<Y<<endl;
		ans1(1, 1, H, W, 0);
//		for(int q=1; q<=H; q++) {
//			for(int w=1; w<=W; w++) {
//				cout<<dp[q][w]<<" ";
//			}
//			cout<<endl;
//		}
		cout<<dp[X][Y]<<endl;
	}
}

