#include <iostream>
using namespace std;
using namespace std;
bool chked[505][505];
int r,c;
char arr[505][505];
int f(int i,int j){
    chked[i][j]=true;
    int ans=1;
    
    if(arr[i][j-1]=='x'&&!chked[i][j-1]) {ans+=f(i,j-1);};
    if(arr[i][j+1]=='x'&&!chked[i][j+1]) {ans+=f(i,j+1);};
    if(arr[i-1][j]=='x'&&!chked[i-1][j]) {ans+=f(i-1,j);};
    if(arr[i+1][j]=='x'&&!chked[i+1][j]) {ans+=f(i+1,j);};
    return ans;
}
int main(){
    int ans=-1;
    cin>>r>>c;
    for(int i=1;i<=r;i++) for(int j=1;j<=c;j++) cin>>arr[i][j];

    for(int i=1;i<=r;i++) {
        for(int j=1;j<=c;j++){
            if(arr[i][j]=='x'&&!chked[i][j]){
                ans=max(ans,f(i,j));
            }
        }
    }
    }

/*
4 5
....x
..xx.
.xx.x
....x

4 5
...


8 9
.........
....xxxx.
....x....
x..xx...x
...xxx...
....x....
.......x.
.......xx

*/