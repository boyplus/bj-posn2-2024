#include <iostream>
using namespace std;
const int MOD = 1e9+7;
const int MAX_N = 1002;
int dp[MAX_N][MAX_N];
typedef long long ll;
ll rec(int n,int k){
	if(n == k || k == 0) return 1;
	if(dp[n][k]){
		return dp[n][k]%MOD;
	} 
	return dp[n][k] = (rec(n-1,k-1)%MOD + rec(n-1,k)%MOD)%MOD;
}
int main(){
	int n,k;
	cin >> n >> k;

	ll ans = rec(n,k);
	cout << ans << "\n";

	return 0;
}