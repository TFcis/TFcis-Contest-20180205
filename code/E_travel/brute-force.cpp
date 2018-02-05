// By xiplus
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int m[1001][1001];
int visit[1001][1001];
//bool cald[1001][1001];
int H, W, X, Y, ans;
void dfs(int x, int y, int dx, int dy, int w) {
	visit[x][y] = 1;
	w+=m[x][y];
//	cout<<x<<" "<<y<<" "<<dx<<" "<<dy<<" "<<w<<endl;
	if(x==X && y == Y) ans = min(ans, w);
	else {
		int ldx, ldy;
		if(dx==1&&dy==0) ldx=0, ldy=1;
		else if(dx==0&&dy==1) ldx=-1, ldy=0;
		else if(dx==-1&&dy==0) ldx=0, ldy=-1;
		else ldx=1, ldy=0;
		int nx = x+dx, ny = y+dy;
		if(nx>=1&&nx<=H&&ny>=1&&ny<=W&&!visit[nx][ny]) {
			dfs(nx, ny, dx, dy, w);
		}
		nx = x+ldx, ny=y+ldy;
		if(nx>=1&&nx<=H&&ny>=1&&ny<=W&&!visit[nx][ny]) {
			dfs(nx, ny, ldx, ldy, w);
		}
	}
//	cout<<"break"<<endl;
	visit[x][y] = 0;
}
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	while(cin>>H>>W>>X>>Y) {
		ans=2147483647;
		for(int q=1; q<=H; q++) {
			for(int w=1; w<=W; w++) {
				cin>>m[q][w];
			}
		}
		dfs(1, 1, 1, 0, 0);
		cout<<ans<<endl;
	}
}

