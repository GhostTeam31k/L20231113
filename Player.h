#pragma once
#include "Character.h"

class FPlayer : public FCharacter
{
public:
	FPlayer();
	~FPlayer();

	void Move();
};

//Player is a Character.
//Goblin is a Character.
//Character is a Player.
