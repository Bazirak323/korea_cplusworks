//#include <iostream>
//using namespace std;
//#include <string>
//class Book {
//private:
//	int number;			//��ȣ
//	string title;		//����
//	string author;		//����
//public:
//	//������ �����ε� - �̸��� ����, �Ű������� �ٸ���.
//	Book() {
//		cout << "��ü�� �����մϴ�.\n";
//	} // �⺻ ������ - ��������(�ڵ����� �߰��Ǳ� ������
//	//å ��ȣ �Է� �Լ�
//	//�Ҹ���
//	~Book() {
//		cout << "��ü�� �Ҹ��մϴ�." << endl;
//
//	}
//	//�Ű������� �ִ� ������
//	Book(int number, string title, string author)
//	{
//		this->number = number;
//		this->title = title;
//		this->author = author;
//	}
//
//
//	//å ��ȣ �������� �Լ�
//	int getNumber()
//	{
//		return number;
//	}
//
//
//	//å ���� �Է��ϰ�
//
//	//å ���� ��������
//	string getTitle()
//	{
//		return title;
//
//
//	}
//
//	//å ���� ��������
//	string getAuthor()
//	{
//		return author;
//
//
//	}
//};
//
//
//
//
//int main()
//{
//	Book book1(100, "ä��������", "�Ѱ�");
//
//
//	//cout << "å ��ȣ : " << book1.getNumber() << endl;
//	////
//	//cout << "å ���� : " << book1.getTitle() << endl;
//	////
//	//cout << "�۰� �̸� : " << book1.getAuthor() << endl;
//
//	Book book[3] =
//	{
//		Book(100, "ä��������", "�Ѱ�"),
//		Book(101, "����������", "������"),
//		Book(102, "���������", "���ϰ�")
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "å ��ȣ : " << book[i].getNumber() << endl;
//		cout << "å ���� : " << book[i].getTitle() << endl;
//		cout << "�۰� �̸� : " << book[i].getAuthor() << endl;
//		cout << "\n ===================== \n\n";
//
//	}
//	return 0;
//}