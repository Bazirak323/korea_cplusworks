#include <iostream>
#include <string>
using namespace std;





int square(int x)
{

	return x * x;
}

int myAbs(int x)
{
	if (x < 0)
	return -x;
	else
	return x;


}

string message()
{
	return "Happy Birthday ! ! ";


}

int main_NNN()
{



	int value1 = square(6);


	cout << value1 << endl;


	int value2 = myAbs(-2);
	cout << value2 << endl;

	string msg = message();

	cout << msg << endl;


	return 0;
}