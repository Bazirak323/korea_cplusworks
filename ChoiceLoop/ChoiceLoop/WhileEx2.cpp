#include <iostream>
#include <string>
using namespace std;

/*
While 반복문
초기값
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
	cout << "합계 : " << sum << endl;


	return 0;
}

