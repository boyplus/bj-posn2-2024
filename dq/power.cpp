#include <iostream>
using namespace std;
int power(int a,int b){
	if(b == 0) return 1;
	int temp = power(a, b/2);
	if(b%2 == 0) return temp*temp;
	return temp*temp*a;
}
int main(){
	int ans = power(2,7);
	cout << ans << "\n";


	return 0;
}