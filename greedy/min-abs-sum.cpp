#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());
	int choose = vec[n/2];

	


	return 0;
}