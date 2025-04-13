#include <iostream>
#include <string>
using namespace std;

//다중 상속 - 엄마가 여럿

class Character
{
public :
	Character() 
	{
		cout << "Character 클래스 생성자" << endl;

	}
	~Character()
	{
		cout << "Character 클래스 소멸자" << endl;
	}
};


class Monster
{
public:
	Monster()
	{
		cout << "Monster 클래스 생성자" << endl;

	}
	~Monster()
	{
		cout << "Monster 클래스 소멸자" << endl;
	}
};

class MonsterA : public Monster, Character
{private :
	int location[2];
public :
MonsterA() : MonsterA(0, 0)
{
	cout << " MonsterA  클래스 생성자" << endl;

}
MonsterA(int x, int y) : location{ x, y }
{
	cout << "MonsterA 클래스 생성자" << endl;
}
void showLocation() 
{
	cout << "위치" << location[0] << " , " << location[1] << ")" << endl;
}

};

int main()
{
	MonsterA WoodMonster(19, 29);
	WoodMonster.showLocation();
	return 0;
}