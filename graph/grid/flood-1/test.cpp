#include <iostream>
#include <utility>
#include <queue>
#include <tuple>
using namespace std;
typedef pair<int,int> pii;
const int MAX_N = 505, INF = 1e9+7;
string s[MAX_N];
int dist[MAX_N][MAX_N]; // ระยะทางจากจุดเริ่มต้นมายังที่ช่องใด ๆ
int main(){
    int n,m,r,c;
    cin >> n >> m;
    for(int i=0;i<n;i++) cin >> s[i];

    // หา S ว่าอยู่ที่ตำแหน่งไหน
    pii start = {-1,-1};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) if(s[i][j] == 'w') start = {i,j};
    }

    // กำหนดให้ทุกช่องของ dist เป็น INF
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) dist[i][j] = INF;

    tie(r,c) = start;
    dist[r][c] = 0;

    queue<pii> q;
    q.push(start);
    int dr[4] = {0,0,1,-1};
    int dc[4] = {1,-1,0,0};
    while(!q.empty()){
        tie(r,c) = q.front();
        q.pop();
        // เช็ค 4 ทิศ
        for(int i=0;i<4;i++){
            int nr = r+dr[i];
            int nc = c+dc[i];
            if(nr < 0 || nr >= n || nc < 0 || nc >= m) continue;
            if(s[nr][nc] == 'x') continue;
            if(dist[nr][nc] != INF) continue;

            q.push({nr,nc});
            dist[nr][nc] = dist[r][c] + 1;
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