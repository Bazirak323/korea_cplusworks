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


	cout << "=== 값에 의한 호출 ===" << endl;

		callByVal(n);
	cout << " n = " << n << endl << endl << endl<< endl;

	cout << "=== 주소에 의한 호출 ===" << endl;

	callByRef(&n);
	cout << " n = " << n << endl;






	return 0;
}