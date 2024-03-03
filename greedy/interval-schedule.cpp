#include <iostream>
#include <algorithm>
using namespace std;
typedef pair<int,int> pii;
bool cmp(pii& l, pii& r){
	return l.second < r.second;
}
int main(){
	int n,s,e;
	cin >> n;
	vector<pair<int,int>> vec(n);
	for(int i=0;i<n;i++){
		cin >> s >> e;
		vec[i] = {s,e};
	}

	sort(vec.begin(), vec.end(), cmp);
	int last = 0;
	vector<pii> ans;
	for(auto& v:vec){
		tie(s,e) = v;
		if(last < s){
			ans.push_back({s,e});
			last = e;
		}
	}
	cout << ans.size() << "\n";
	for(auto& se : ans){
		tie(s,e) = se;
		cout << s << " " << e << "\n";
	}
	return 0;
}

/*
5
2 6
4 5
1 3
3 5
6 9
*/