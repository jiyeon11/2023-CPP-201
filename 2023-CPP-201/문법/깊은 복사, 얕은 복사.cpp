#include<iostream>
using namespace std;

int main(void) 
{
	//ptr1�� int 3��¥�� �迭�� �����Ҵ� ��Ų �� ����Ų��.
	int* ptr1 = new int[3];
	ptr1[0] = 0, ptr1[1] = 10, ptr1[2] = 20;
	//ptr2�� ������ �����Ҵ��� ���� �ʰ� ptr1�� �ּҰ��� �����Ѵ�
	//�̷��� ���縦 ��������(shallow copy)
	int* ptr2 = ptr1;
	
	//���� ���縦 �ϸ� ���� �����Ϳ� ���ӵȴ�.
	//��, ptr2[1] �� 100���� �ٲ��.
	ptr1[1] = 100;

	for (int i = 0; i < 3; i++)
	{
		cout << ptr1[i] << ptr2[i] << endl;
	}

	return 0;
}