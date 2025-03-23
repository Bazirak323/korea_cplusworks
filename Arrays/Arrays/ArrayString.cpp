#include <iostream>
using namespace std;
#include <string>
int main()
{
	string cart[] = { "라면", "빵", "화장지", "생수" };

	cout << cart[0] << endl;


	cout << size(cart) << endl;


	for (int i = 0; i < size(cart); i++)
	{
		cout << cart[i] << " ";
							//띄어쓰기

	}


	return 0;
}