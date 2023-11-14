#include <iostream>
#include <Vector>
#include <list>
#include <algorithm>

#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

using namespace std;


//meta programing
//template<typename T>
//class Container

int main()
{

	//STL, Container 자료저장하는 공간
	//vector<FPlayer*> Player;
	vector<int> IntArray;

	IntArray.push_back(1);
	for (int i = 0; i < IntArray.size(); ++i)
	{
		IntArray[i];
	}

	IntArray.push_back(1);
	IntArray.push_back(2);
	IntArray.push_back(3);

	//for (auto i = IntArray.rbegin(); i != IntArray.rend(); ++i)
	for (auto Value : IntArray)
	{
		cout << Value << endl;
	}

	list<int> IntList;
	IntList.push_back(1);
	IntList.push_back(2);
	IntList.push_back(3);

	//for (auto i = IntList.begin(); i != IntList.end(); ++i)
	for (auto Value : IntList)
	{
		cout << Value << endl;
	}

	return 0;
}