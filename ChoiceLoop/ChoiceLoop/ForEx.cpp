#include <iostream>
#include <string>
using namespace std;

int main()
{
	for (int n = 1; n <= 10; n++)
	{
		cout << n << "이다.\n";




	}
	cout << "\n=================================\n\n";

	int sum = 0;
	for (int n = 1; n <= 10; n++)
	{
		sum += n;
		cout << "n=" << n << ", sum = " << sum << endl;

	}

	cout << endl;
	cout << "합계 : " << sum << endl;
























	return 0;
}