#include "Slime.h"
#include <iostream>

FSlime::FSlime()
{
	std::cout << "Slime »ý¼ºµÊ" << std::endl;
}

FSlime::~FSlime()
{
	std::cout << "Slime ÆÄ±«µÊ" << std::endl;
}

void FSlime::Move()
{
	std::cout << "½½¶óÀÓÀÌ ¿òÁ÷ÀÎ´Ù." << std::endl;
}
