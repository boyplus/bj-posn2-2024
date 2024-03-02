#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print_vector(vector<int>& vec){
	for(int x : vec){
		cout << x << " ";
	}
	cout << endl;
}
int main(){
	vector<int> vec;

	// push_back -> push new element in the vector at the end of vector
	vec.push_back(10);
	vec.push_back(3);
	vec.push_back(-1);
	vec.push_back(20);
	vec.push_back(5);
	vec.push_back(-8);
	print_vector(vec);

	// pop_back -> remove last element of vector
	vec.pop_back();
	vec.pop_back();
	print_vector(vec);


	// insert -> insert new element before the element at the specific position
	vec.insert(vec.begin(), 5);
	vec.insert(vec.begin(), 12);
	print_vector(vec);


	// erase -> erase element at the specific position, range
	vec.erase(vec.begin()+2);
	vec.erase(vec.begin()+2);
	print_vector(vec);

	// reverse by using function in algorithm
	reverse(vec.begin(), vec.end());
	print_vector(vec);

	return 0;
}