#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
typedef tuple<int,int,int> tii;
const int MAX_R = 505, MAX_C = 505;
const int INF = 1e9+7;
string s[MAX_R];
int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};
int dist[MAX_R][MAX_C];
bool visited[MAX_R][MAX_C];
int main(){
	int n,m,r,c,d;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> s[i];
	}
	tii water = {-1,-1,-1};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j] == 'w'){
				water = {i,j,0};
				break;
			}
		}
		if(get<0>(water) != -1) break;
	}

	for(int i=0;i<n;i++) for(int j=0;j<m;j++) dist[i][j] = INF;

	queue<tii> q;
	q.push(water);

	while(!q.empty()){
		tie(r,c,d) = q.front();
		dist[r][c] = d;
		visited[r][c] = true;
		q.pop();

		for(int i=0;i<4;i++){
			int nr = r+dr[i];
			int nc = c+dc[i];
			if(nr < 0 || nr >= n || nc < 0 || nc >= m) continue;
			if(s[nr][nc] == 'x' || visited[nr][nc]) continue;

			q.push({nr, nc, d + 1});
			dist[nr][nc] = d+1;
			visited[nr][nc] = true;
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(dist[i][j] == INF) cout << "x ";
			else cout << dist[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}

/*
5 6
...x..
.x.x..
....x.
.w..x.
.x....


*/