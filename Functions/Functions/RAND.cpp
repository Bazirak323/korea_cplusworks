#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//srand(11);

	srand(time(NULL));




	//동전 던지기
	int coin = rand() % 2;
	

	//앞면 0 뒷면 1


	for (int i = 1; i <= 10; i++)
	{
		int dice = rand() % 6 + 1;
		cout << "나온 숫자 : " << dice;
		cout << "\n\n====================\n\n";
	}

	string carts[] = { "쌀", "소고기", "콩나물", "커피" };
	for (int i = 0; i <= 10; i++)
	{
		int cart = rand() % 4;
		cout << "구매한 물건 : " <<  carts[cart];
		cout << "\n\n========================\n\n";
	}

	return 0;
}