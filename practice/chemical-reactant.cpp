#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
	int n,p,x;
	map<vector<int>,int> mp;
	scanf("%d %d",&n,&p);
	for(int i=1;i<=n;i++){
		vector<int> vec;
		for(int j=1;j<=p;j++){
			scanf("%d",&x);
			vec.push_back(x);
		}
		mp[vec] = i;
	}

	vector<int> target(p);
	for(int i=0;i<p;i++){
		scanf("%d",&target[i]);
	}

	// First case
	if(mp.find(target) != mp.end()){
		printf("%d\n", mp[target]);
		return 0;
	}

	// Find
	for(auto& m:mp){
		vector<int> want(p,0);
		for(int i=0;i<p;i++){
			want[i] = target[i] - m.first[i];
		}
		if(mp.find(want) != mp.end() && mp[want] != m.second){
			int a = m.second;
			int b = mp[want];
			printf("%d %d\n", min(a,b),max(a,b));
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}

/*
3 2
1 2
3 4
5 6
1 2

*/