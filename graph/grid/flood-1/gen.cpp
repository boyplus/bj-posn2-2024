#include <stdio.h>
#include <time.h>
#include <stdlib.h>
const int MAX_R = 500, MAX_C = 500;
int main(){
	srand(time(NULL));
	int r = 500;
	// int r = rand()%MAX_R+1;
	// int c = rand()%MAX_C+1;
	int c = 500;
	printf("%d %d\n",r,c);

	int wr = rand()%r;
	int wc = rand()%c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i == wr && j == wc) {
				printf("w");
			} else{
				int x = rand()%5;
				if(x == 0){
					printf("x");
				} else{
					printf(".");
				}
			}

		}
		printf("\n");
	}

	return 0;
}