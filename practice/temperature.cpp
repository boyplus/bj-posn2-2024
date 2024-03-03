#include <cstdio>
#include <queue>
#include <tuple>
using namespace std;
const int MAX_M = 22;
int arr[MAX_M][MAX_M];
bool vis[MAX_M][MAX_M];
int dy[4] = {0,0,1,-1};
int dx[4] = {1,-1,0,0};
int main(){
	int m, x, y;
	scanf("%d %d %d",&m,&x,&y);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int mx = arr[y][x];
	queue<pair<int,int>> q;
	q.push({y, x});
	while(!q.empty()){
		int y,x;
		tie(y,x) = q.front();
		if(arr[y][x] > mx) mx = arr[y][x];
		vis[y][x] = true;
		q.pop();
		for(int i=0;i<4;i++){
			int ny = y+dy[i];
			int nx = x+dx[i];
			if(ny < 1 || ny > m || nx < 1 || nx > m) continue;
			if(arr[ny][nx] == 100 || vis[ny][nx]) continue;
			if(arr[ny][nx] > arr[y][x]) {
				vis[ny][nx] = true;
				q.push({ny,nx});
			}
		}
	}
	printf("%d\n", mx);
	return 0;
}