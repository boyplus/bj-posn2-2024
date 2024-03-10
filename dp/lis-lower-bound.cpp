#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int MAX_N = 100005;
int arr[MAX_N];
vector<int> lis;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	for(int i=0;i<n;i++){
		int idx = lower_bound(lis.begin(), lis.end(), arr[i]) - lis.begin();
		if(idx == lis.size()){
			lis.push_back(arr[i]);
		} else{
			lis[idx] = arr[i];
		}
	}

	cout << lis.size() << "\n";

	return 0;
}