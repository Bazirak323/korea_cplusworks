#include <iostream>
#include <string>
using namespace std;

/*
While �ݺ���
�ʱⰪ
*/


int main_wildside()
{
	int n = 1;

	int sum = 0;
	while (1)
	{
		if (n > 10)
			break;
		sum += n;
		n++;
	}
	cout << "�հ� : " << sum << endl;


	return 0;
}

