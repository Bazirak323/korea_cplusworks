#include <iostream>
#include <fstream> // ���� ����� �� �ݵ�� �ʤ�6����
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
		cerr << "Error : ������ �� �� �����ϴ�.\n";
		return 1;
	}

	for (int i = 0; i < 3; i++)
	{
		string name;
		cout << i + 1 << "��° �л��� �̸� :  ";
		cin >> name;
		student[i].setName(name);
		int eng;
		cout << "���� ���� �Է� : ";
		cin >> eng;
		student[i].setEng(eng);
		int math;
		cout <<"���� ���� �Է� :  ";
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
	cout << "�����͸� �����߽��ϴ�.\n";

	system("pause"); //exe ������ ���� ������



	return 0;
}