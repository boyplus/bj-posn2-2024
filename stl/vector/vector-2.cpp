#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> vec1(5);
	cout << vec1.size() << endl;

	cout << "Init vector with size of 5 and no default value" << endl;
	for(int x : vec1){
		cout << x << " ";
	}
	cout << endl << endl;

	vector<int> vec2(5, 10);
	cout << "Init vector with size of 5 and default value of 10" << endl;
	for(int x : vec2){
		cout << x << " ";
	}
	cout << endl << endl;
	return 0;
}