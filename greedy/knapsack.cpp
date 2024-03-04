#include <iostream>
#include <vector>
using namespace std;
class item{
public:
	double weight, value, ratio;
	item(){
	}
	item(double weight, double value){
		this->weight = weight;
		this->value = value;
		this->ratio = value/weight;
	}
};
bool cmp(item& left, item& right){
	return left.ratio > right.ratio;
}
int main(){
	int n;
	double max_weight, w, v;
	cin >> n >> max_weight;
	vector<item> items(n);
	for(int i=0;i<n;i++){
		cin >> w >> v;
		items[i] = item(w, v);
	}

	sort(items.begin(), items.end(), cmp);
	double ans = 0;
	for(item& x:items){
		// cout << x.ratio << " " << x.weight << " " << x.value << "\n";
		if(max_weight == 0) break;
		double w = x.weight, v = x.value, r = x.ratio;

		if(w > max_weight){
			ans = ans + r * max_weight;
			max_weight = 0;
		} else{
			ans = ans + v;
			max_weight -= w;
		}
	}
	cout << ans << "\n";
	return 0;
}

/*
5 100
40 40
10 20
20 30
30 66
50 60

*/