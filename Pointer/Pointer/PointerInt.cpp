#include <iostream>
#include <string>
using namespace std;

int main_2323232()
{



	//������ �� �� ����� �ʱ�ȣ�Ф̤�
	//���� ����
	int n = 10;
	cout << n << endl;
	cout << &n << endl;


	//������ ������ ���� - ���� ����(�޸�)

	int* pn = &n;

	cout << pn << endl;
	

	cout << *pn << endl; // ������


	int num = 1;
	int* ptr;
	ptr = &num;

	cout << *ptr << endl;

	*ptr = 100;
	cout << *ptr << endl;

	return 0;
}