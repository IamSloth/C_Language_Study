#include "Arr.h"
#include <iostream>

void InitArr(_tagArr* _pArr)
{
	_pArr->iCount = 0;
	_pArr->iMaxCount = 2;
	//_pArr->pInt = (int*)malloc(sizeof(int) * _pArr->iMaxCount);
	_pArr->pInt = new int[_pArr->iMaxCount];
}

void ReMalloc(_tagArr* _pArr)
{
	//int* temp = (int*)malloc(sizeof(int) * _pArr->iMaxCount * 2);
	int* temp = new int[_pArr->iMaxCount * 2];

	for (int i = 0; i < _pArr->iMaxCount; i++)
	{
		temp[i] = _pArr->pInt[i];
	}

	//free(_pArr->pInt);
	delete[]_pArr->pInt;
	_pArr->pInt = temp;

	_pArr->iMaxCount *= 2;
}


void PushBack(_tagArr* _pArr, int _iData)
{
	if (_pArr->iMaxCount <= _pArr->iCount)
	{
		ReMalloc(_pArr);
	}
	_pArr->pInt[_pArr->iCount] = _iData;
	_pArr->iCount++;
}

void FreeArr(_tagArr* _pArr)
{
	_pArr->iCount = 0;
	_pArr->iMaxCount = 0;
	//free(_pArr->pInt);
	delete [](_pArr->pInt);
}

void Sort(struct _tagArr* _pArr,
			void(*SortFunc)(int* _pArr_pInt, int _pArr_iCount,const char* _asc_or_dsc),
			const char* sortMethod)
{
	if (sortMethod == "asc")
	{
		SortFunc(_pArr->pInt, _pArr->iCount, "asc");
	}

	else if(sortMethod == "dsc")
	{
		SortFunc(_pArr->pInt, _pArr->iCount, "dsc");
	}

	else
	{
		SortFunc(_pArr->pInt, _pArr->iCount, "n");
	}

	
}

//void SelectionSort(_tagArr* _pArr, const char asc_Or_dsc[5])
//{
//	if (asc_Or_dsc == "asc")
//	{
//		for (int i = 0; i < _pArr->iCount - 1; i++)
//		{
//			for (int j = i + 1; j < _pArr->iCount; j++)
//			{
//				if (_pArr->pInt[i] > _pArr->pInt[j])
//				{
//					int temp = _pArr->pInt[i];
//					_pArr->pInt[i] = _pArr->pInt[j];
//					_pArr->pInt[j] = temp;
//				}
//			}
//		}
//	}
//
//	else if (asc_Or_dsc == "dsc")
//	{
//		for (int i = 0; i < _pArr->iCount - 1; i++)
//		{
//			for (int j = i + 1; j < _pArr->iCount; j++)
//			{
//				if (_pArr->pInt[i] < _pArr->pInt[j])
//				{
//					int temp = _pArr->pInt[i];
//					_pArr->pInt[i] = _pArr->pInt[j];
//					_pArr->pInt[j] = temp;
//				}
//			}
//		}
//	}
//
//	else
//	{
//		printf("nothing\n");
//	}
//
//	
//}

//void BubbleSort(_tagArr* _pArr, const char asc_Or_dsc[5])
//{
//	if (asc_Or_dsc == "asc")
//	{
//		for (int i = 0; i < _pArr->iCount; i++)
//		{
//			for (int j = 0; j < _pArr->iCount - 1; j++)
//			{
//				if (_pArr->pInt[j] > _pArr->pInt[j + 1])
//				{
//					int temp = _pArr->pInt[j];
//					_pArr->pInt[j] = _pArr->pInt[j + 1];
//					_pArr->pInt[j + 1] = temp;
//				}
//			}
//		}
//	}
//
//	else if (asc_Or_dsc == "dsc")
//	{
//		for (int i = 0; i < _pArr->iCount; i++)
//		{
//			for (int j = 0; j < _pArr->iCount - 1; j++)
//			{
//				if (_pArr->pInt[j] < _pArr->pInt[j + 1])
//				{
//					int temp = _pArr->pInt[j];
//					_pArr->pInt[j] = _pArr->pInt[j + 1];
//					_pArr->pInt[j + 1] = temp;
//				}
//			}
//		}
//	}
//
//	else
//	{
//		printf("nothing\n");
//	}
//	
//}



