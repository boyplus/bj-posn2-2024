#include <iostream>
#include <vector>
#include <utility>
using namespace std;
typedef pair<int,int> pii;
int main(){
	vector<pii> vec;
	vec.push_back({1,2});
	vec.push_back({-3,5});
	vec.push_back({10,3});
	vec.push_back({2,8});

	for(pii x:vec){
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	return 0;
}