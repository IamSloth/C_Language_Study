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
	//�� ������ �Ҵ��� ������ �� ��
	if (_pArr->iCount >= _pArr->iMaxCount)
	{
		//���Ҵ�
		Reallocate(_pArr);
	}
	_pArr->pInt[_pArr->iCount] = _iData;
	_pArr->iCount++;
}

void Reallocate(struct _tabArr* _pArr)
{
	//1. 2�� �� ū ������ �����Ҵ��Ѵ�.
	int* pTemp;
	pTemp = (int*)malloc(_pArr->iMaxCount * 2 * sizeof(int));

	//2. ���� ������ �ִ� �����͵��� ���� �Ҵ��� �������� �����Ų��.
	for (int i = 0; i < _pArr->iCount; i++)
	{
		pTemp[i] = _pArr->pInt[i];
	}
	
	//3. ���� ������ �޸� ����
	free(_pArr->pInt);
	
	//4. �迭�� ���� �Ҵ��� ������ ����Ű�� �Ѵ�.
	_pArr->pInt = pTemp;

	//5. MaxCount ������ ����
	_pArr->iMaxCount *= 2;
}
