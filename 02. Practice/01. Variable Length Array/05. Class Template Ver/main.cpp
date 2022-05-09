#include<stdio.h>
#include "CTArr.h"

int main()
{
	CArr<char> carr;

	carr.push_back(65);
	carr.push_back(66);
	carr.push_back(67);
	carr.push_back(68);
	carr.push_back(69);
	carr.push_back(70);

	for (int i = 0; i < 6; i++)
	{
		printf("%c ", carr[i]);
	}

	char iData[6];

	for (int i = 0; i < 6 ; i++)
	{
		iData[i] = carr[5-i];
	}

	for (int i = 0; i < 6; i++)
	{
		printf("%c ", iData[i]);
	}


	return 0;
}