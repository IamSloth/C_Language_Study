#include "Linkedlist.h"
#include <iostream>

void InitList(_tagList* _pList)
{
	_pList->iCount = 0;
	_pList->pHeadNode = nullptr;
}

void PushBack(_tagList* _pList, int _iData)
{
	struct _tagNode* pNode = new struct _tagNode;
	
	pNode->iData = _iData;
	pNode->pNextNode = nullptr;

	//�߰��� �����Ͱ� ó������ �ƴ���
	if (0 == _pList->iCount)
	{
		_pList->pHeadNode = pNode;
	}
	else
	{

		//���� ���� ������ ��带 ã�Ƽ�,
		// �ش� ����� pNext�� ������Ų ����� �ּҷ� ä��.
		struct _tagNode* pCurFinalNode = _pList->pHeadNode;
		while (pCurFinalNode->pNextNode)
		{
			pCurFinalNode = pCurFinalNode->pNextNode;
		}

		pCurFinalNode->pNextNode = pNode;
	}
	_pList->iCount++;
}

void ReleaseList(_tagList* _pList)
{
	struct _tagNode* pDeleteNode = _pList->pHeadNode;

	while (pDeleteNode)
	{
		struct _tagNode* pNext = pDeleteNode->pNextNode;
		delete [] pDeleteNode;
		pDeleteNode = pNext;
	}
}
