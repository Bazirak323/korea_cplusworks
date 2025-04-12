#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
inline int square(int x) { return x * x; }

int main()
{
	auto ch = 'k';

	auto n = 2;
	auto* pn = &n;

		cout << ch << endl;
		cout << n << endl;
		cout << *pn << endl;



		auto value = square(8);
		cout << value << endl;





		vector<int> v = { 1, 2, 3, 4 };

		for (auto it = v.begin(); it != v.end(); it++)
			//값을 알고 싶을 때는 포인터의 역참조
		{
			cout << *it << "  ";
		}


	return 0;
}