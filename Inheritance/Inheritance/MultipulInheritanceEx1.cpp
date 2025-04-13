#include <iostream>
#include <string>
using namespace std;

//���� ��� - ������ ����

class Character
{
public :
	Character() 
	{
		cout << "Character Ŭ���� ������" << endl;

	}
	~Character()
	{
		cout << "Character Ŭ���� �Ҹ���" << endl;
	}
};


class Monster
{
public:
	Monster()
	{
		cout << "Monster Ŭ���� ������" << endl;

	}
	~Monster()
	{
		cout << "Monster Ŭ���� �Ҹ���" << endl;
	}
};

class MonsterA : public Monster, Character
{private :
	int location[2];
public :
MonsterA() : MonsterA(0, 0)
{
	cout << " MonsterA  Ŭ���� ������" << endl;

}
MonsterA(int x, int y) : location{ x, y }
{
	cout << "MonsterA Ŭ���� ������" << endl;
}
void showLocation() 
{
	cout << "��ġ" << location[0] << " , " << location[1] << ")" << endl;
}

};

int main()
{
	MonsterA WoodMonster(19, 29);
	WoodMonster.showLocation();
	return 0;
}