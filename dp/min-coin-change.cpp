#include <iostream>
using namespace std;
const int MAX_N = 500, MAX_K = 100000;
const int INF = 1e9+7;
int arr[MAX_N+3], n;
int dp[MAX_K+3];
int rec(int k){
	if(k == 0) return 0;

	if(dp[k] != INF) return dp[k];

	int min_ans = INF;
	for(int i=0; i<n; i++){
		if(arr[i] > k) continue;
		int current_ans = rec(k-arr[i]) + 1;
		min_ans = min(min_ans, current_ans);
	}
	return dp[k] = min_ans;
}
int main(){
	int k;
	cin >> n >> k;
	for(int i=0;i<n;i++) cin >> arr[i];

	for(int i=0;i<=MAX_K;i++) dp[i] = INF;

	int ans = rec(k);
	if(ans == INF) cout << "IMPOSSIBLE\n";
	else cout << ans << "\n";
	return 0;
}