#include <iostream>
#include "Arr.h"

void InitArr(_tabArr* _pArr)
{
	_pArr->pInt = (int*)malloc(sizeof(int) * 2);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 2;
}

void ReleaseArr(_tabArr* _pArr)
{
	free(_pArr->pInt);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 0;
}

void PushBack(_tabArr* _pArr, int _iData)
{
	//힙 영역에 할당한 공간이 다 참
	if (_pArr->iCount >= _pArr->iMaxCount)
	{
		//재할당
		Reallocate(_pArr);
	}
	_pArr->pInt[_pArr->iCount] = _iData;
	_pArr->iCount++;
}

void Reallocate(struct _tabArr* _pArr)
{
	//1. 2배 더 큰 공간을 동적할당한다.
	int* pTemp;
	pTemp = (int*)malloc(_pArr->iMaxCount * 2 * sizeof(int));

	//2. 기준 공간에 있던 데이터들을 새로 할당한 공간으로 복사시킨다.
	for (int i = 0; i < _pArr->iCount; i++)
	{
		pTemp[i] = _pArr->pInt[i];
	}
	
	//3. 기존 공간은 메모리 해제
	free(_pArr->pInt);
	
	//4. 배열이 새로 할당한 공간을 가리키게 한다.
	_pArr->pInt = pTemp;

	//5. MaxCount 변경점 적용
	_pArr->iMaxCount *= 2;
}
