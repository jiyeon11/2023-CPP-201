#include<iostream>
#include<string>
#include<string.h>

using namespace std;

class MString {
	
public:
	
	MString(const char* str)
	{
		unsigned int str_length = strlen(str);
		//필요한 길이만큼 문자열 동적할당
		c_str_ = new char[str_length+1];   // '/0'(널문자) 공간+1
		strcpy(c_str_, str);
		cout << "MString 생성자 호출 완료" << endl;
	}
	//소멸자(destructor)
	~MString()
	{
		//생성자에 동적할당한 공간을 해제
		delete[] c_str_;
		cout << "MString 소멸자 호출 완료" << endl;
	}

	unsigned int size() { return size_; }
	char* c_str() { return c_str_; }

private:
	unsigned int size_;     //문자열의 길이
	char* c_str_;			//문자열을 가리키는 주소
};

int main(void)
{
	MString str1 = MString("Aitai");
	cout << str1.c_str() << endl;

	return 0;
}

/*메모
	생성자: 객체 생성될 때(메모리에 할당될 때) 호출되는 함수
	특징: 클래스 이름과 같음, 반환형 없음
	소멸자: 객체가 소멸될 때(메모리에 해제될 때) 호출되는 함수
	특징: ~클래스 이름, 반환형과 매개변수가 없음

	//복사생성자
	:기존 객체의 값을 그대로 복사하는 생성자
	얕은복사: 주소값만 복사, 원본객체에 종속
	깊은 복사: 모든 값들을 새롭게 복사, 원본객체와 상관없이 독립
*/