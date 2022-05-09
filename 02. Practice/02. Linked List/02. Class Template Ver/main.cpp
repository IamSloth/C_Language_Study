#include <iostream>

#include "CTList.h"


int main()
{
	CList<int> list;

	for (int i = 0; i < 4; i++)
	{
		list.push_front(i);
	}


	return 0;
}