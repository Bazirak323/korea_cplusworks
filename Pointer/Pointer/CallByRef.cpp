#include <iostream>
#include <string>
using namespace std;


void callByVal(int x)
{
	x++;

}

void callByRef(int* pn)
{
	*pn = *pn + 1;

}

int main()
{
	int n = 10;


	cout << "=== ���� ���� ȣ�� ===" << endl;

		callByVal(n);
	cout << " n = " << n << endl << endl << endl<< endl;

	cout << "=== �ּҿ� ���� ȣ�� ===" << endl;

	callByRef(&n);
	cout << " n = " << n << endl;






	return 0;
}