#include <iostream>
#include <algorithm>
using namespace std;
const int MAX_N = 100005;
int arr[MAX_N], lis[MAX_N];
int main(){
	int n;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	for(int i=0;i<n;i++){
		lis[i] = 1;
	}

	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[i] > arr[j] && lis[i] <= lis[j]){
				lis[i] = lis[j]+1;
			}

		}
	}

	int ans = lis[0];
	for(int i=1;i<n;i++){
		ans = max(ans, lis[i]);
	}

	cout << ans << "\n";
	return 0;
}