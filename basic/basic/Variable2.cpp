#include <iostream>
#include <string> // string �ڷ��� ����
using namespace std;
//�̸� ����(�Ҽ�)�� std�� ����ϰڴ�.
int maiygygygygyygygygn() {



	char ch1[] = "��";
	char ch2 = 65;

	//���̻ѵ�
	
	char ch3 = '\n';
	cout << ch3 << endl;
	char ch4[] = "��";
	cout << ch4 << endl;

	cout << "�ڷ����� ũ�� : " << sizeof(ch1) << endl;
	cout << "�ڷ����� ũ�� : " << sizeof(ch4) << endl;
	

	//���ڿ�(c++���� �߰��� �ڷ��� : string


	string s1 = "banana";


		cout << s1 << endl;
		cout << "�ڷ����� ũ�� : " <<sizeof(s1) << "byte" << endl;

		cout << "���ڿ��� ũ�� : " <<size(s1) << "byte" << endl;
		










































	return 0;
}