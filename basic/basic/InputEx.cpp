#include <iostream>
#include <string>
using namespace std;


int main_INPUT() 
{

	int number; //�й�
	string name;
	int eng;
	int math;
	double avg;



	cout << "�й� �Է� : ";
	cin >> number;





	cout << "�̸� �Է� : ";
	cin >> name;


	cout << "�������� �Է� : ";
	cin >> eng;

	cout << "�������� �Է� : ";
	cin >> math;

	avg = (double)((math + eng) / 2);


	cout << "\n===�л��� ����===\n\n";




	cout << "�й� : " << number << endl;
	cout << "�̸� : " << name << endl << "���� ���� : " << eng << endl << "���� ���� : " << math << endl;
	cout << "��� : " << avg << endl;



	//���� ���� (���ǽ� ? "��" : "����)


	int faterAge = 199;
	int matherAge = 50;
	char result;
	string result2;


	result = (faterAge > matherAge) ? 'T' : 'F';
	result2 = (faterAge > matherAge) ? "�߷�" : "����";

	cout << "��� : " << result2 << endl;










	return 0;
}