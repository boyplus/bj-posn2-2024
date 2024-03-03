#include <iostream>
#include <vector>
using namespace std;
vector<int> vec;
int n;
int arr[20];
void rec(int k){
	if(k == n){
		cout << "{";
		for(int i=0;i<vec.size();i++){
			if(i != 0){
				cout << ", ";
			}
			cout << vec[i];
		}
		cout << "}\n";
		return;
	}

	// ใส่ arr[k] ลงใน subset
	vec.push_back(arr[k]);
	rec(k+1);
	vec.pop_back();

	// ไม่ใส่ arr[k]
	rec(k+1);
}
int main(){
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	rec(0);
	return 0;
}