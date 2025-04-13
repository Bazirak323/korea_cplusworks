#include <iostream>
#include <fstream> // 파일 입출력 시 반드시 필ㅇ6ㅛ함
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int eng;
	int math;
	double avg;
public:
	void setName(string name) { this->name = name; }
	void setEng(int eng) { this->eng = eng; }
	void setMath(int math) { this->math = math; }

	void calcAvg()
	{
		avg = (double)(eng + math) / 2;
	}


	string getName() { return name; }
	int getEng() { return eng; }
	int getMath() { return math; }
	double getAvg() { return avg; }
};
int main()
{
	ofstream out("scorelist.txt");
	Student student[3];

	if (!out)
	{
		cerr << "Error : 파일을 열 수 없습니다.\n";
		return 1;
	}

	for (int i = 0; i < 3; i++)
	{
		string name;
		cout << i + 1 << "번째 학생의 이름 :  ";
		cin >> name;
		student[i].setName(name);
		int eng;
		cout << "영어 점수 입력 : ";
		cin >> eng;
		student[i].setEng(eng);
		int math;
		cout <<"수학 점수 입력 :  ";
		cin >> math;
		student[i].setMath(math);

		student[i].calcAvg();

	}
	for (int i = 0; i < 3; i++)
	{
		out << student[i].getName() << "   "
			<< student[i].getEng() << "   "
			<< student[i].getMath() << "   "
			<< student[i].getAvg() << endl;

	}



	out.close();
	cout << "데이터를 저장했습니다.\n";

	system("pause"); //exe 파일을 실행 유지함



	return 0;
}