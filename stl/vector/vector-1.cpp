#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> vec = {7,6,1,0,-3};
	
	cout << "size is " << vec.size() << endl;

	cout << "Access each element by using for loop and index" << endl;
	for(int i=0; i<vec.size(); i++){
		cout << vec[i] << " ";
	}
	cout << endl << endl;

	cout << "Access each element by using for each" << endl;
	for(int x : vec){
		cout << x << " ";
	}
	cout << endl << endl;

	// Iterator -> use to point at the memory address of STL container
	vector<int>::iterator itr;
	itr = vec.begin();
	cout << "First element of vector is " <<  *itr << endl;

	cout << "Access each element by using iterator" << endl;
	for(itr = vec.begin(); itr < vec.end(); itr++){
		cout << *itr << " ";
	}
	cout << endl << endl;

	cout << "Access each element by using iterator with auto keyword" << endl;
	for(auto a = vec.begin(); a < vec.end(); a++){
		cout << *a << " ";
	}
	cout << endl << endl;

	return 0;
}