//정렬 정리 블로그
//https://gmlwjd9405.github.io/2018/05/06/algorithm-insertion-sort.html

#include <iostream>
#include "Arr.h"
#include <time.h>

void BubbleSort(int* _pData, int _iCount, const char* asc_or_dsc)
{
	if (asc_or_dsc == "asc")
	{
		for (int i = 0; i < _iCount; i++)
		{
			for (int j = 0; j < _iCount - 1; j++)
			{
				if (_pData[j] > _pData[j + 1])
				{
					int temp = _pData[j];
					_pData[j] = _pData[j + 1];
					_pData[j + 1] = temp;
				}
			}
		}
	}

	else if (asc_or_dsc == "dsc")
	{
		for (int i = 0; i < _iCount; i++)
		{
			for (int j = 0; j < _iCount - 1; j++)
			{
				if (_pData[j] < _pData[j + 1])
				{
					int temp = _pData[j];
					_pData[j] = _pData[j + 1];
					_pData[j + 1] = temp;
				}
			}
		}
	}

	else
	{
		printf("Nothing Change\n");
	}
}

void SelectionSort(int* _pData, int _iCount, const char* asc_or_dsc)
{

	if (asc_or_dsc == "asc")
	{
		for (int i = 0; i < _iCount - 1; i++)
		{
			for (int j = i + 1; j < _iCount; j++)
			{
				if (_pData[i] > _pData[j])
				{
					int temp = _pData[i];
					_pData[i] = _pData[j];
					_pData[j] = temp;
				}
			}
		}
	}
	
	else if (asc_or_dsc == "dsc")
	{
		for (int i = 0; i < _iCount - 1; i++)
		{
			for (int j = i + 1; j < _iCount; j++)
			{
				if (_pData[i] < _pData[j])
				{
					int temp = _pData[i];
					_pData[i] = _pData[j];
					_pData[j] = temp;
				}
			}
		}
	}

	else
	{
		printf("NOTHING\n");
	}


}

int main()
{

	//int num[10] = { 5,9,45,35,15,84,99,151,6,5 };

	//BubbleSort(num, 10, "asc");

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", num[i]);
	//}

	printf("\n");

	struct _tagArr a1;

	InitArr(&a1);

	//난수(랜덤)
	srand(time(nullptr));

	for (int i = 0; i < 10; i++)
	{
		PushBack(&a1, (rand() % 100) + 1);
	}

	printf("난수를 생성합니다.\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a1.pInt[i]);
	}
	printf("\n");

	printf("버블정렬 방식으로 내림차순 정렬입니다.\n");
	Sort(&a1, BubbleSort,"dsc");
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a1.pInt[i]);
	}
	printf("\n");

	printf("선택정렬 방식으로 오른차순 정렬입니다.\n");
	Sort(&a1, SelectionSort, "asc");

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