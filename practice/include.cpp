#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;
const int MAX_N = 1002;
int vis[MAX_N];
vector<int> vec[MAX_N];
bool ans = false;
void rec(int u){
	vis[u]++;
	for(int v:vec[u]){
		if(vis[v] > 0) {
			ans = true;
			return;
		}
		rec(v);
	}
}

int main(){
	int n,k,f;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d",&k);
		for(int j=1;j<=k;j++){
			scanf("%d",&f);
			vec[i].push_back(f);
		}
	}

	for(int i=1;i<=n;i++){
		memset(vis, 0, sizeof(vis));
		ans = false;
		rec(i);
		if(ans == true){
			printf("YES\n");
		} else{
			printf("NO\n");
		}
	}

	return 0;
}

/*
3
1 2
1 3
1 1
*/