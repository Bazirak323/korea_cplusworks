#include <iostream>
using namespace std;
#include <string>
class Dog
{
public:
	string type;
	int age;
	//������, ��� �Լ��� ����ο� �����η� �и� �����ϴ�.

	Dog()
	{cout << " ��ü�� �����մϴ�.\n";}; // �⺻ ������ - �����ص� �����Ϸ��� �ڵ����� ������

	Dog(string t, int a)
	{
		type = t;
		age = a;
	}

	void bark();
	void doginfo();

};

void Dog::doginfo()
{
	cout << "������ ���� : " << type << endl;
	cout << "������ ���� : " << age << "��" << endl;


}

void Dog::bark()
{
	cout << "�۸�" << endl;

}

int main_tainc()
{


	/*
	Dog dog1("Ǫ��", 3);
	dog1.doginfo();
	dog1.bark();
	Dog dog2("������", 3);
	dog2.doginfo();
	dog2.bark();
	*/
	Dog dog[3] = {
		Dog("Ǫ��", 3),
		Dog("�ù�", 5),
		Dog("������", 2)
		//�̶��� Ŭ����

	};
	for (int i = 0; i < 3; i++)
	{	//�̶��� �ν��Ͻ�
		dog[i].doginfo();
		cout << ("\n=======================================\n\n");
	}






	return 0;

}