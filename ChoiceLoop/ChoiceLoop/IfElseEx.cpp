#include <iostream>
#include <string>
using namespace std;

int main_ifelseEx()
{
	int n1 = 10;
	int n2 = 11;

	if (n1 == n2)
	{

		cout << "두 수는 같습니다.\n";


	}
	else
	{
		cout << "두 수는 같지 않습니다.\n";
	}

	//문자 비교문 -compare()함수 사용

	string str1 = "orange";
	string str2 = "orangeeeeeeeeeeeeeeeeeeeeeeee";


	if (str1.compare(str2) == 0)
	{

		cout << "두 단어는 일치합니다.\n";
		cout << str1.compare(str2) << endl;

	}
	else
	{

		cout << "두 단어는 일치하지 않습니다.\n";
		cout << str1.compare(str2) << "\n";

	}












	return 0;
}