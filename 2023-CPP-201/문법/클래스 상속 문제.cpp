#include<iostream>

using namespace std;

class Person {
public:
	Person(string name, int hakbun) :name_(name),hakbun_(hakbun){ }
	void PrintShow() {
		cout << "�̸� : " << name_ << endl;
		cout << "�й� : " << hakbun_ << endl;
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
		cout << "���б� : " << university_ << endl;
	}
	~Student() {};
private:
	string university_;
};


int main(void) {
	Student* stu = new Student("�̋���", 2100, "������б�");
	stu->PrintShow();

}