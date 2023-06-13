#include<iostream>

using namespace std;

class Person {
public:
	Person(string name, int hakbun) :name_(name),hakbun_(hakbun){ }
	void PrintShow() {
		cout << "이름 : " << name_ << endl;
		cout << "학번 : " << hakbun_ << endl;
	};
	~Person() {};
private:
	string name_;
	int hakbun_;
};

class Student : public Person{
public:
	Student(string name, int hakbun, string university):Person(name, hakbun),university_(university){}
	void PrintShow() {
		Person::PrintShow();
		cout << "대학교 : " << university_ << endl;
	}
	~Student() {};
private:
	string university_;
};


int main(void) {
	Student* stu = new Student("이떙떙", 2100, "서울대학교");
	stu->PrintShow();

}