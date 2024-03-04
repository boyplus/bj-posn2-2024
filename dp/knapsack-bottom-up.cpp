#include <iostream>
#include <algorithm>
using namespace std;
const int MAX_N = 505;
const int MAX_K = 100005;
int dp[MAX_N][MAX_K];
int w[MAX_N], v[MAX_N];
int main(){
	int n,k;
	cin >> n >> k;
	for(int i=1;i<=n;++i) cin >> w[i] >> v[i];

	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(w[i] > j){
				dp[i][j] = dp[i-1][j];
			} else{
				int mx = dp[i-1][j];
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
			}
		}
	}
	cout << dp[n][k] << "\n";
	return 0;
}