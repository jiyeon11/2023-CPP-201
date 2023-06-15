#include<iostream>

using namespace std;

#define COLOR_RED	0
#define COLOR_GREEN 1
#define COLOR_BLUE	2

class Animal {
public:
	Animal(int color, int age) : color_(color), age_(age)
	{
		cout << "Animal ������()" << endl;
	}

	virtual ~Animal() { cout << "Animal �Ҹ���()" << endl; }
	//�����Լ� : Javaó�� �������ε�
	virtual void Roar(void) { cout << "Animal ¢��" << endl; }
	void Eat(void) { cout << "Animal �Դ�" << endl; }
	void Sleep(void) { cout << "Animal �ڴ�" << endl; }

private:
	int color_;
	int age_;
};


class Rabbit : public Animal {
public:
	//�θ������(Animal(color, age))�� ���� ȣ��
	Rabbit(int color, int age, int ear_length):Animal(color, age),ear_length_(ear_length)
	{ 
		cout << "Rabbit ������()" << endl; 
	}
	virtual ~Rabbit() { cout << "Rabbit �Ҹ���()" << endl; }
	//�Լ� override
	//������(polymorphism) : �ñ״���(��ȯ��, �̸�, �Ű������� ��� ����)�� ���� �Լ��ӿ��� �ٸ��� ����Ǵ� ��
	//override : �θ� �Լ� �ñ״��İ� �������� ������ �����߻�(�Ǽ�����)
	void Roar(void) override{
		cout << "���ѱ���" << endl;
	}
private:
	int ear_length_;
};

int main(void) {
	//�Ҹ��ڿ� virtual�� ���ϸ� �ڽ� �Ҹ��ڰ� ȣ����� �ʾƼ� �޸� ���������� �߻�
	Animal* animal = new Rabbit(COLOR_RED, 3, 20);
	animal->Roar(); //���� ����
	delete animal;
}