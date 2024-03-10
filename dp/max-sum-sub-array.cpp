#include <iostream>
using namespace std;
const int MAX_N = 100005;
int arr[MAX_N], dp[MAX_N];
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}

	int ans = arr[1];
	dp[1] = arr[1];

	for(int i=2;i<=n;i++){
		dp[i] = max(dp[i-1]+arr[i], arr[i]);
		ans = max(ans, dp[i]);
	}
	for(int i=1;i<=n;i++){
		cout << dp[i] << " ";
	}
	// cout << dp[n] << "\n";
	return 0;
}