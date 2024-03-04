#include <iostream>
#include <vector>
using namespace std;
const int MAX_N = 1000;
const int MAX_K = 100000;
int arr[MAX_N+7];
bool dp[MAX_N+7][MAX_K+7];
bool visited[MAX_N+7][MAX_K+7];
bool rec(int n, int k){
	if(k == 0) return true;
	if(n <= 0) return false;
	
	if(visited[n][k]) {
		return dp[n][k];
	}
	visited[n][k] = true;

	if(arr[n] > k){
		return dp[n][k] = rec(n-1, k);
	} else {
		return dp[n][k] = rec(n-1, k-arr[n]) || rec(n-1, k);
	}
}
int main(){
	int n, k;
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}

	bool ans = rec(n, k);

	if(ans) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}
/*
9 12
6 5 1 3 9 2 4 10 11

5 12
1 5 3 7

*/