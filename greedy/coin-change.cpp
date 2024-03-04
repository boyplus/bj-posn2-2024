#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// Given that we always use highest coin first
int main(){
	int n,k;
	cin >> n >> k;
	vector<int> coins(n);
	for(int i=0;i<n;i++){
		cin >> coins[i];
	}
	sort(coins.begin(), coins.end(), greater<int>());

	int ans = 0;
	for(int coin : coins){
		if(k == 0) break;
		ans += k/coin;
		k %= coin;
	}
	cout << ans << "\n";
	return 0;
}