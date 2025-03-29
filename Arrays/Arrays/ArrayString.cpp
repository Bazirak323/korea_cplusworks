#include <iostream>
#include <string>
using namespace std;
int main_zz()
{
	string cart[] = { "라면", "빵", "화장지", "생수" };

	cout << cart[1] << endl;


	cout << size(cart) << endl;

	cart[1] = "쌀";

	


	for (int i = 0; i < size(cart); i++)
	{
		cout << cart[i] << " ";
							//띄어쓰기

	}


	return 0;
}