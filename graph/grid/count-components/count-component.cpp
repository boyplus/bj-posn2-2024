#include <iostream>
using namespace std;
const int MAX_R = 505, MAX_C = 505;
string s[MAX_R];
bool visited[MAX_R][MAX_C];
int r,c, cnt = 0;
void dfs(int i, int j){
	visited[i][j] = true;
	if(j > 0 && !visited[i][j-1] && s[i][j-1] == 'x') dfs(i,j-1);
	if(j < c && !visited[i][j+1] && s[i][j+1] == 'x') dfs(i,j+1);
	if(i > 0 && !visited[i-1][j] && s[i-1][j] == 'x') dfs(i-1,j);
	if(i < r && !visited[i+1][j] && s[i+1][j] == 'x') dfs(i+1,j);
}
int main(){
	cin >> r >> c;

	for(int i=0;i<r;i++){
		cin >> s[i];
	}

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(s[i][j] == 'x' && visited[i][j] == false){
				cnt++;
				dfs(i,j);
			}
		}
	}

	cout << cnt << "\n";

	return 0;
}

/*
4 5
....x
..xx.
.xx.x
....x


8 9
.........
....xxxx.
....x....
x..xx...x
...xxx...
....x....
.......x.
.......xx

*/