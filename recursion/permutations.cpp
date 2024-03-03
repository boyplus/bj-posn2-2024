#include <iostream>
#include <vector>
using namespace std;
const int MAX_N = 11;
int arr[MAX_N], n;
bool check[MAX_N];
vector<int> vec;
void search(){
	if(vec.size() == n){
		for(int x:vec) cout << x << " ";
		cout << "\n";
		return;
	}
	for(int i=0;i<n;i++){
		if(check[i]) continue;

		check[i] = true;
		vec.push_back(arr[i]);
		search();


		check[i] = false;
		vec.pop_back();
	}
}
int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	search();
	return 0;
}