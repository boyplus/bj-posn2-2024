#include <iostream>
#include <utility>
using namespace std;
typedef pair<int,int> pii;
int main(){
    pii p1;

    // Init, access by using .first, .second
    p1.first = 10;
    p1.second = 12;

    cout << p1.first << " " << p1.second << endl;

    // Init by using constructor
    pii p2(23, -1);
    cout << p2.first << " " << p2.second << endl;


    // Init by using {}
    pii p3 = {8, 1};
    cout << p3.first << " " << p3.second << endl;


    // Init by using make_pair function
    pii p4 = make_pair(2, 3);
    cout << p4.first << " " << p4.second << endl;

    // tie -> copy value of pair to var
    int a,b;
    tie(a, b) = p1;
    cout << a << " " << b << endl;

    
	return 0;
}