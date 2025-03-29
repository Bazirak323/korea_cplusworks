#include <iostream>
#include <string>
using namespace std;

int main_We()
{
	int a[4] = { 10, 20, 30, 40 };

	cout << a[0] << endl;
	cout << &a[0] << endl;


	//정소후여 포인터 배열
	int* pa;
	pa = a;

	cout << pa << endl;
	cout << *pa << endl;
	cout << *(pa + 1) << endl;


	for (int i = 0; i < size(a); i++)
	{

		cout << *(pa + i) << endl;
	}

	return 0;
}