#include<iostream>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal ������()" << endl; }
	~Animal() { cout << "Animal �Ҹ���()" << endl; }
};

class Rabbit : public Animal {
public:
	//�Ű������� ���� �θ� �����ڰ� �ڵ����� ���� ȣ��ȴ�.
	Rabbit() { cout << "Rabbit ������()" << endl; }
	~Rabbit() { cout << "Rabbit �Ҹ���()" << endl; }
};

int main(void) {
	Rabbit* rabbit = new Rabbit();
	delete rabbit;
}