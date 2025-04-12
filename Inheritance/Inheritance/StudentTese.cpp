//#include <iostream>
//#include <string>
//using namespace std;
//
////상속 - 기존에 있던 클래스를 사용해서 새로운 클래스를 만드는 것 
//
//
//class Person {
//private :
//	string name;
//	int age; 
//public :
//	void setName(string name)
//	{
//		this->name = name;
//	}
//	void setAge(int age)
//	{
//		this->age = age;
//	}
//
//	string getName() { return name; }
//	int getAge() { return age; }
//};
//
//class Student : public Person {
//private :
//	int studentID;
//public :
//	void setStudentID(int studentID) {
//		this->studentID = studentID;
//	}
//	int getStudentID() { return studentID; }
//
//};
//
//int main()
//{	//사람 한 명 생성
//	Person p1;
//	p1.setName("이강토");
//	p1.setAge(40);
//
//	//정보 출력
//	cout << "이름 : " << p1.getName() << endl;
//	cout << "나이 : " << p1.getAge() << endl;
//
//
//	Student s1;
//		s1.setStudentID(23232);
//		s1.setAge(323);
//		s1.setName("장수");
//
//		cout << "이름 : " << s1.getName() << endl;
//		cout << "나이 : " << s1.getAge() << endl;
//		cout << "학번 : " << s1.getStudentID() << endl;
//
//
//	return 0;
//}