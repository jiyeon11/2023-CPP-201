#include<iostream>
#include<string>

using namespace std;

class Employee {
public:

	Employee(){}  // �⺻������
	
	Employee(string _name, int _age, int _id, double _salary)
		:name_(_name), age_(_age), id_(_id), salary_(_salary) {}

	void set_name_(string _name) { name_ = _name; }
	void set_age_(int _age) { age_ = _age; }
	void set_id_(int _id) { id_ = _id; }
	void set_salary_(double _salary) { salary_ = _salary; }

	void PrintInfo(void) {
		cout << "�̸� : " << name_ << endl;
		cout << "���� : " << age_ << endl;
		cout << "��� : " << id_ << endl;
		cout << "�޿� : " << salary_ << endl;
	}

private:
	string name_;
	int id_;
	int age_;
	double salary_;
};

int main(void) {

	Employee *a = new Employee("������", 26, 1232,500); //��ü
	printf("��ü a\n");
	a->PrintInfo();

	printf("\n");

	Employee* b = new Employee[2];  //��ü�迭

	b[0].set_name_("�̰ų�");
	b[0].set_age_(59);
	b[0].set_id_(5999);
	b[0].set_salary_(2000);
	b[1].set_name_("���ٴ�");
	b[1].set_age_(56);
	b[1].set_id_(5665);
	b[1].set_salary_(1000);

	printf("��ü b\n");
	for (int i = 0; i < 2; i++) {
		b[i].PrintInfo();
		printf("\n");
	}
	delete a;
	delete[] b;
	return 0;
}