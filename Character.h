#pragma once
class FCharacter
{
public:
	FCharacter();
	~FCharacter();

	void Move();

	int GetHP()
	{
		return HP;
	}

	void SetHP(int InNewHP)
	{
		if (InNewHP >= 0)
		{
			HP = InNewHP;
		}
	}
protected:
	int HP;
};

/*
*				상속		다른 사용자 사용
* public :		상속		접근 가능
*
* protected :	상속		접근 불가
*
* private :		상속 X	접근 불가
*/

