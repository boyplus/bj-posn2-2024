#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout << "Top of stack is " << s.top() << endl;
	cout << "Size of stack is " << s.size() << endl << endl;

	while(!s.empty()){
		int data = s.top();
		cout << data << " ";
		s.pop();
	}
	cout << endl;


	return 0;
}