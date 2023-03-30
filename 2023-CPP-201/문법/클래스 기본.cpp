//C++
#include<iostream>
#include<string>
using namespace std;
//여러 data들을 하나의 의미있는 구조체로 묶어서 관리
//구조체, 클래스는 단어의 첫 글자를 대문자로 한다.
struct Student {
	string name;
	//성능 때문에 문자열로 하지 않음.
	//일반적으로 문자열은 정수 데이터보다 많은 메모리 공간을 요구하며
	//정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수 만큼 반복하여 비교해야함
	int hakbun;
	//가독성과 유지보수를 위해 열거형(enum)으로 하는 것을 추천
	//0:남자, 1:여자
	int sex;  
	int age;
	string department;
};

int main(void) 
{
	struct Student stu;
	stu.name = "연지이";
	
	stu.hakbun = 2123;
	stu.age = 18;
	stu.sex = 1;
	stu.department = "뉴미디어 소프트웨어과";
	

	cout << "이름 : " << stu.name << endl;
	cout << "학번 : " << stu.hakbun << endl;
	cout << "나이 : " << stu.age << endl;
	cout << "성별(0)남자,(1)여자 : " << stu.sex << endl;
	cout << "학과 : " << stu.department << endl;
	return 0;
}
