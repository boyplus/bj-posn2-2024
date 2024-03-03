#include <iostream>
#include <map>
using namespace std;
int main(){
	map<string, int> mp;
	mp["Thanaphon"] = 87;
	mp["Teerapat"] = 56;
	mp["Mongkol"] = 97;
	mp["Piak"] = 12;
	mp.insert({"Nattawat", 65});


	cout << mp.size() << endl;
	for(auto& x:mp){
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;

	// Incorrect way to find key in map by using []
	string key = "Wasupon";
	cout << mp[key] << endl;
	if(mp.find(key) != mp.end()){
		cout << "key " << key << " found, and value is " << mp[key] << endl;
	} else {
		cout << "Key " << key << " not found" << endl;
	}
	cout << endl << endl;


	// Correct -> use .find() first
	key = "Supakit";
	if(mp.find(key) != mp.end()){
		cout << "key " << key << " found, and value is " << mp[key] << endl;
	} else {
		cout << "Key " << key << " not found" << endl;
	}
	cout << endl << endl;


	key = "Mongkol";
	if(mp.find(key) != mp.end()){
		cout << "key " << key << " found, and value is " << mp[key] << endl;
	} else {
		cout << "Key " << key << " not found" << endl;
	}
	cout << endl << endl;

	cout << "Erase key from map" << endl;
	mp.erase("Thanaphon");

	for(map<string,int>::iterator x = mp.begin(); x != mp.end(); x++){
		cout << x->first << " " << x->second << endl;
	}
	cout << endl;

	return 0;
}