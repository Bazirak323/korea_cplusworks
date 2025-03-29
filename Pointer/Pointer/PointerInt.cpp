#include <iostream>
#include <string>
using namespace std;

int main_2323232()
{



	//정수형 변 수 선언과 초기호ㅠㅜㅏ
	//직접 참조
	int n = 10;
	cout << n << endl;
	cout << &n << endl;


	//정수형 포인터 선언 - 간접 참조(메모리)

	int* pn = &n;

	cout << pn << endl;
	

	cout << *pn << endl; // 역참조


	int num = 1;
	int* ptr;
	ptr = &num;

	cout << *ptr << endl;

	*ptr = 100;
	cout << *ptr << endl;

	return 0;
}