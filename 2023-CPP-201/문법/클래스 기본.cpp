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
	//생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다. 
	Student()  //매개변수 없는 ver
	{
		name = "연지이";
		hakbun = 2123;
		age = 18;
		sex = 1;
		department = "뉴미디어 소프트웨어과";
	}

	Student(string name, int hakbun, int age, int sex, string department) //매개변수 있는 ver
	{
		//this : 객체 자기자신을 가리키는 포인터
		//매개변수명과 멤버변수명이 같아도 구별가능
		this->name = name;
		this->hakbun = hakbun;
		this->age = age;
		this->sex = sex;
		this->department = department;
	}
	//class는 멤버변수를 가질 수 있다.
	void print(void) {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << hakbun << endl;
		cout << "나이 : " << age << endl;
		cout << "성별(0)남자,(1)여자 : " << sex << endl;
		cout << "학과 : " << department << endl;
	}

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
		Student stu = Student("씨쁠이",0001,12,0,"뉴미디어 씨쁠쁠과");

		stu.print();
		return 0;
	}
