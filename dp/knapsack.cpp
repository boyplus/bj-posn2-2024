#include <iostream>
#include <utility>
#include <vector>
#include <tuple>
using namespace std;
const int MAX_N = 500;
const int MAX_K = 100000;
typedef pair<int,int> pii;
vector<pii> vec;
int dp[MAX_N+5][MAX_K+5];
int rec(int n,int k){
	if(k == 0) return 0;
	if(n < 0) return 0;

	if(dp[n][k] != -1) return dp[n][k];

	int w,v;
	tie(w,v) = vec[n];

	if(w > k) return dp[n][k] = rec(n-1, k);

	return dp[n][k] = max(rec(n-1, k-w)+v, rec(n-1, k));
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k,v,w;
	cin >> n >> k;
	for(int i=0;i<n;++i){
		cin >> w >> v;
		vec.push_back({w,v});
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=k;j++){
			dp[i][j] = -1;
		}
	}
	int ans = rec(n-1,k);
	cout << ans << "\n";

	return 0;
}