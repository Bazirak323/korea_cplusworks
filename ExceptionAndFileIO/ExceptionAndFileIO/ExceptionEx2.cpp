//#include <iostream>
//#include <string>
//using namespace std;
//
//int stringTOInt(const char x[])
//{
//	int sum = 0;
//	int len = strlen(x);
//	for(int i = 0; i<len; i++)
//		if (x[i] > '0' && x[i] < '9')
//		{
//			sum = sum * 10 + x[i] - '0';
//		}
//		else
//		{
//			throw x;
//		}
//	return sum;
//}
//
//
///*
//1�� �� sum = 1
//2�� �� sum = 10 
//*/
//
//int main()
//{
//	int n;
//
//	try
//	{
//		n = stringTOInt("12a");
//		cout << "\"12\" �� ���� " << n << "���� ��ȯ��\n";
//	}
//	catch (const char* str)
//	{
//		cout << str << "ó������ ���� �߻�!\n";
//	}
//
//
//
//
//	return 0;
//}