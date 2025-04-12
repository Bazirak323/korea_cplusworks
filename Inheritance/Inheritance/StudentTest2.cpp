//#include <iostream>
//#include <string>
//using namespace std;
//
////상속 - 기존에 있던 클래스를 사용해서 새로운 클래스를 만드는 것 
//
//
//class Person {
//private:
//	string name;
//	int age;
//public:
//	//매개변수가 있는 생성자
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
//{	//사람 한 명 생성
//	Person p1("이강토", 23);
//
//	//정보 출력
//	cout << "이름 : " << p1.getName() << endl;
//	cout << "나이 : " << p1.getAge() << endl;
//
//	cout << "\n=============================================\n\n";
//	Student s1(2232, "장수", 23);
//
//	cout << "이름 : " << s1.getName() << endl;
//	cout << "나이 : " << s1.getAge() << endl;
//	cout << "학번 : " << s1.getStudentID() << endl;
//
//
//	return 0;
//}