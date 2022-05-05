#include <iostream>
#include "Arr.h"

int main()
{
	struct _tagArr a1;

	InitArr(&a1);

	//for (int i = 0; i < 10; i++)
	//{
	//	PushBack(&a1, i);
	//}

	PushBack(&a1, 6);
	PushBack(&a1, 2);
	PushBack(&a1, 10);
	PushBack(&a1, 8);
	PushBack(&a1, 11);
	PushBack(&a1, 1);
	PushBack(&a1, 7);
	PushBack(&a1, 4);
	PushBack(&a1, 20);
	PushBack(&a1, 5);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a1.pInt[i]);
	}
	printf("\n");

	BubbleSort(&a1, "dd");
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a1.pInt[i]);
	}
	printf("\n");

	//Sort(&a1, "dsc");

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", a1.pInt[i]);
	//}
	//printf("\n");

	printf("\n%d %d\n", a1.iCount, a1.iMaxCount);

	FreeArr(&a1);

	//구조체(클래스) 값들의 초기화가 필요하다.

	return 0;
}