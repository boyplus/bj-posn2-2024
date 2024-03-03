#include <cstdio>
#include <queue>
using namespace std;
class graph{
public:
	int v,w;
	graph(int v,int w){
		this->v = v;
		this->w = w;
	}
};
const int MAX_N = 100002;
int dist[MAX_N];
vector<graph> vec[MAX_N];
int main(){
	int n,u,v,w;
	scanf("%d", &n);

	for(int i=1;i<n;i++){
		scanf("%d %d %d",&u,&v,&w);
		vec[u].push_back({v,w});
	}

	queue<int> q;
	q.push(1);
	dist[1] = 0;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(auto& g:vec[u]){
			int v = g.v;
			int w = g.w;
			dist[v] = dist[u]+w;
			q.push(v);
		}
	}

	int mx = 0;
	for(int i=1;i<=n;i++){
		if(dist[i] > mx) mx = dist[i];
	}
	printf("%d\n", mx);

	return 0;
}

/*
11
1 2 1427
1 3 741
1 4 1763
1 5 2491
1 6 1849
2 7 1219
3 8 1100
4 9 1071
3 10 1587
2 11 1418
*/