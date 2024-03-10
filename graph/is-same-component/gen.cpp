#include <stdio.h>
#include <time.h>
#include <stdlib.h>
const int MAX_N = 50;
int main(){
	srand(time(NULL));
	int q = 250;
	printf("%d\n",q);
	while(q--){
		int x = rand()%MAX_N;
		int y = rand()%MAX_N;
		printf("%d %d\n",x,y);
	}

	return 0;
}