#include <iostream>
using namespace std;
#include <string>



//����ü - �������� �ڷ����� �׷�ȭ ��
struct Student {
	string name;		//�̸�
	int grade;			//�г�
	string address;		//�ּ�

};


int main()
{
	//����ü ��� - ���� ����
	Student st = Student();
	//��� �� .�� ����Ѵ�.
	st.name = "������";
	st.grade = 3;
	st.address = "����� ����� ��赿";

	cout << "�л� �̸� = " << st.name << endl;
	cout << "�г� = " << st.grade << endl;
	cout << "�л� �ּ� = " << st.address << endl;













	return 0;
}