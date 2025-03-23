#include <iostream>
#include <string>
using namespace std;

/*
While 반복문
초기값
*/


int main_WhileEx22()
{

	int n = 1;
	int sum = 0;

	while (1)
	{
		sum += n; // sum = sum+n
		cout << "n = " << n << ", sum =" << sum << endl;
		n++;
	}

	cout << "합계 : " << sum << endl;

















	return 0;
}
