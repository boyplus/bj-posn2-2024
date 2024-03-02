#include <iostream>
#include <queue>
using namespace std;
int main(){
	priority_queue<int> pq;
	pq.push(10);
	pq.push(3);
	pq.push(5);
	pq.push(20);
	pq.push(12);

	cout << pq.top() << endl;
	cout << pq.top() << endl;

	while(!pq.empty()){
		int data = pq.top();
		cout << data << " ";
		pq.pop();
	}
	cout << endl;


	return 0;
}