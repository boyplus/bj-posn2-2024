#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);

	cout << "Front of queue is " << q.front() << endl;
	cout << "Back of queue is " << q.back() << endl;
	cout << "Size of queue is " << q.size() << endl << endl;


	q.pop();
	cout << "After pop the queus, front of queue is " << q.front() << endl << endl;

	cout << "Print all element in queue" << endl;
	while(!q.empty()){
		int data = q.front();
		cout << data << " ";
		q.pop();
	}
	cout << endl;


	return 0;
}