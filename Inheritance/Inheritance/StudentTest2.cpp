//#include <iostream>
//#include <string>
//using namespace std;
//
////��� - ������ �ִ� Ŭ������ ����ؼ� ���ο� Ŭ������ ����� �� 
//
//
//class Person {
//private:
//	string name;
//	int age;
//public:
//	//�Ű������� �ִ� ������
//	Person(string name, int age) : name(name), age(age){}
//
//
//	string getName() { return name; }
//	int getAge() { return age; }
//};
//
//class Student : public Person {
//private:
//	int studentID;
//public:
//	Student(int studentID, string name, int age) : 
//		Person(name, age), studentID(studentID) { }
//	int getStudentID() { return studentID; }
//
//};
//
//int main()
//{	//��� �� �� ����
//	Person p1("�̰���", 23);
//
//	//���� ���
//	cout << "�̸� : " << p1.getName() << endl;
//	cout << "���� : " << p1.getAge() << endl;
//
//	cout << "\n=============================================\n\n";
//	Student s1(2232, "���", 23);
//
//	cout << "�̸� : " << s1.getName() << endl;
//	cout << "���� : " << s1.getAge() << endl;
//	cout << "�й� : " << s1.getStudentID() << endl;
//
//
//	return 0;
//}