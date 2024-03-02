#include <iostream>
using namespace std;
class student{
public:
	string name;
	int score;
	student(string name, int score){
		this->name = name;
		this->score = score;
	}
};
void pass_by_value_example(student s){
	cout << "In function" << endl;
	cout << "Original name is " << s.name << endl;
	s.name = "Teerapat";
	cout << "New name in function is " << s.name << endl;
}
void pass_by_reference_example(student& s){
	cout << "In function" << endl;
	cout << "Original name is " << s.name << endl;
	s.name = "Mongkol";
	cout << "New name in function is " << s.name << endl;
}
int main(){
	student s1 = student("Thanaphon", 78);
	cout << "Pass by value" << endl;
	pass_by_value_example(s1);
	cout << "Name in main is " << s1.name << endl << endl << endl;



	cout << "Pass by reference" << endl;
	pass_by_reference_example(s1);
	cout << "Name in main is " << s1.name << endl << endl << endl;
	return 0;
}