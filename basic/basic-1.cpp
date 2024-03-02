#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;

	string arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	// for each in c++
	for(stringc x : arr){
		cout << x << " ";
	}
	cout << endl;
	return 0;
}