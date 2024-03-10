#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAX_N = 1020;
int dp[MAX_N][MAX_N];
int main(){
	char s1[MAX_N], s2[MAX_N];
	scanf("%s", s1+1);
	scanf("%s", s2+1);

	int l1 = strlen(s1+1);
	int l2 = strlen(s2+1);

	for(int i=1; i<=l1; i++){
		for(int j=1; j<=l2; j++){
			if(s1[i] == s2[j]){
				dp[i][j] = dp[i-1][j-1] + 1;
			} else {
				dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
			}
		}
	}

	printf("%d\n", dp[l1][l2]);
	return 0;
}