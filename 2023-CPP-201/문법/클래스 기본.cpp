﻿//C++
#include<iostream>
#include<string>

using namespace std;


//여러 data들을 하나의 의미있는 구조체로 묶어서 관리
//구조체, 클래스는 단어의 첫 글자를 대문자로 한다.
//class는 디폴트가 private (struct는 디폴트가 public)
class Student {
public:
	//생성자(constructor) : 객체가 생성될 때 호출되는 함수
	//생성자함수의 이름은 클래스명과 같다
	//생성자는 반환형을 쓰지 않는다.
	Student(){}
	// : 멤버변수 초기화를 하면 const 멤버변수도 초기화 할 수 있다.
	Student(string _name, int _hakbun, int _age, int _sex, string _department) //매개변수 있는 ver
		:name(_name), hakbun(_hakbun), age(_age), sex(_sex), department(_department)
	{
	}


	//class는 멤버변수를 가질 수 있다.
	void print(void) {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << hakbun << endl;
		cout << "나이 : " << age << endl;
		cout << "성별(0)남자,(1)여자 : " << sex << endl;
		cout << "학과 : " << department << endl;
	}

	void set_name(string _name) { name = _name; }
	void set_hakbun(int _hakbun) { hakbun = _hakbun; }
	void set_age(int _age) { age = _age; }
	void set_sex(int _sex) { sex = _sex; }
	void set_department(string _department) { department = _department; }
private:
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
		//정적할당 : 메모리의 크기가 컴파일할 때 결정됨
		//Student stu = Student("씨쁠이",0001,12,0,"뉴미디어 씨쁠쁠과");
		//stu.print();
		/*Student stu3[2];
		for (int i = 0; i < 2; i++) {
			stu3[i].print();
		}*/
		
		//동적할당 : 메모리의 크기가 실행할 때(runtime) 결정됨, heap영역
		// C++의 동적할당은 반드시 delete로 해제해야 메모리 누수를 막을 수 있음
		//Student* stu2 = new Student("고윤정", 3100, 26, 01, "방송연예과");
		//stu2->print();   //단일객체는 멤버를 ->로 접근
		//delete stu2;
		Student* stu4 = new Student[2];
		stu4[0].set_age(18);
		stu4[0].set_name("지수");
		stu4[0].set_hakbun(2112);
		stu4[0].set_sex(1);
		stu4[0].set_department("뉴미디어웹솔루션");

		stu4[1].set_age(18);
		stu4[1].set_name("혁수");
		stu4[1].set_hakbun(2118);
		stu4[1].set_sex(0);
		stu4[1].set_department("뉴미디어소프트웨어");
		for (int i = 0; i < 2; i++) {
			stu4[i].print();  //배열의 요소에 해당하는 객체는 멤버를 .으로 접근
		}
		delete[] stu4;

		return 0;
	}
	//메모임
	//소멸자
	// 	   객체가 메모리에서 해제될 때 호출되는 함수
	// 	   ~클래스명()
	// 	   -생성자처럼 반환형이 없음
	// 	   -생성자와 다르게 매개변수가 없다
	// 
	// 	   default로 컴파일러가 자동으로 생성
	//