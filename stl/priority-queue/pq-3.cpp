#include <iostream>
#include <queue>
using namespace std;
class student{
public:
	string name;
	int score;
	student(string name, int score){
		this->name = name;
		this->score = score;
	}
};
class cmp{
public:
	bool operator()(student& left, student& right){
		return left.score < right.score;
	}
};
int main(){
	priority_queue<student, vector<student>, cmp> pq;
	pq.push(student("Thanaphon", 89));
	pq.push(student("Teerapat", 76));
	pq.push(student("Mongkol", 97));
	pq.push(student("Tanatat", 50));

	cout << pq.top().name << pq.top().score << endl << endl;

	cout << "Elements in pq" << endl;
	while(!pq.empty()){
		student s = pq.top();
		cout << s.name << " " << s.score << endl;
		pq.pop();
	}
	cout << endl;
	return 0;
}