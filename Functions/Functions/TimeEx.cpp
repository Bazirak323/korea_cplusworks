#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>
#include <thread> //sleep �Լ��� ����ϱ� ���� 
using namespace std;

int main_time()
{
	/*

	time_t now = time(NULL);

	cout << "1970�� 1�� 1�� ���� ���� : " << now << "��" << endl;
	cout << "1970�� 1�� 1�� ���� ���� : " << now / 60 << "��" << endl;
	cout << "1970�� 1�� 1�� ���� ���� : " << now / (60 * 60) << "��" << endl;
	cout << "1970�� 1�� 1�� ���� ���� : " << now / (60 * 60 * 24) << "��" << endl;
	cout << "1970�� 1�� 1�� ���� ���� : " << now / (60 * 60 * 24 * 365) << "��" << endl;


	//����ð� ����
	time_t start, end;

	//0.5�� �������� 1 ~ 10 ���

	time(&start);
	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}
	time(&end);

	cout << "����ð� : " << (end - start) << "��" << endl;



	*/

	time_t ct;
	struct tm* datetime; // tm ����ü ������ ���� ����

	time(&ct);
	datetime = localtime(&ct); //localtime �� ǥ�� ������


	cout << "���� �⵵ : " << datetime->tm_year + 1900 << endl;
	cout << "���� �� : " << datetime->tm_mon + 1 << endl;
	cout << "���� �� : " << datetime->tm_mday << endl;
	cout << "���� �� : " << datetime->tm_hour << endl;
	cout << "���� �� : " << datetime->tm_min << endl;
	cout << "���� �� : " << datetime->tm_sec << endl;


	cout << "���� ��¥ : " << datetime->tm_year + 1900 << "�� " << datetime->tm_mon + 1 << "�� "
		<< datetime->tm_mday << "�� " << datetime->tm_hour << "�� " << datetime->tm_min << "�� "
		<< datetime->tm_sec << "�� ";























































	return 0;
}