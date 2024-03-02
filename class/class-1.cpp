#include <iostream>
using namespace std;
class student{
public:
	// Attributes
	string name;
	int score;

	// constructor
	student(){

	}
	// constructor with parameters
	student(string name, int score){
		this->name = name;
		this->score = score;
	}

	// Methhods
	char getGrade(){
		if(score >= 80) return 'A';
		if(score >= 70) return 'B';
		return 'F';
	}
	void printDetails(){
		cout << this->name << " " << this->score << " " << this->getGrade() << endl;
	}
};
int main(){
	student s1 = student("Thanaphon", 87);
	student s2 = student("Boy", 96);
	

	// mutate attribute value of student object
	s1.score = 76;
	cout << s1.name << " " << s1.score << endl;
	s2.printDetails();

	// Declare student object that go to default constructor
	student s3;
	s3.name = "Mong";
	s3.score = 98;
	cout << s3.name << " " << s3.score << " " << s3.getGrade() << endl;
	

	// can use {} to initialized
	student students[3] = { {"Tanatat", 65}, {"Pongsakorn", 77}, {"Mongkol", 75} };
	for(student s : students){
		s.printDetails();
	}
	
	return 0;
}