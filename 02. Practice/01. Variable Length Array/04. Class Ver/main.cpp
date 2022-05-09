#include<stdio.h>
#include "CArr.h"

int main()
{
	CArr carr;

	carr.push_back(10);
	carr.push_back(20);
	carr.push_back(30);
	carr.push_back(40);
	carr.push_back(50);
	carr.push_back(60);

	for (int i = 0; i < 6; i++)
	{
		printf("%d ", carr[i]);
	}

	int iData[6];

	for (int i = 0; i < 6 ; i++)
	{
		iData[i] = carr[5-i];
	}

	for (int i = 0; i < 6; i++)
	{
		printf("%d ", iData[i]);
	}


	return 0;
}