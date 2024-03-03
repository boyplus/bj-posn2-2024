#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	int n;
	cin >> n;

	string arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	// for each in c++
	for(string x : arr){
		cout << x << " ";
	}
	cout << endl;
	return 0;
}