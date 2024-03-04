#include <iostream>
using namespace std;
const int MAX_N = 30;
typedef long long ll;
ll dp[MAX_N+2];
ll fib(int n){
	if(n <= 2) return 1;
	if(dp[n] != 0) return dp[n];
	return dp[n] = fib(n-1)+fib(n-2);
}
int main(){
	int n;
	cin >> n;
	ll ans = fib(n);
	cout << ans << "\n";

	return 0;
}