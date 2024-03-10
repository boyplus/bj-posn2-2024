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

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			int x = rand()%4;
			if(x == 0){
				printf("x");
			} else{
				printf(".");
			}
		}
		printf("\n");
	}

	return 0;
}