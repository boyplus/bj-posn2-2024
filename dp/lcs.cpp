#include <iostream>
#include <string>
using namespace std;
const int MAX_N = 1005;
string s1,s2;
int dp[MAX_N][MAX_N];
int rec(int i,int j){
	if(i < 0 || j < 0) return 0;

	if(dp[i][j]) return dp[i][j];
	
	if(s1[i] == s2[j]) return dp[i][j] = 1 + rec(i-1,j-1);
	return dp[i][j] = max(rec(i-1,j), rec(i, j-1));
}
int main(){
	cin >> s1 >> s2;
	int ans = rec(s1.length()-1, s2.length()-1);
	cout << ans << "\n";
	return 0;
}