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

	//추가한 데이터가 처음인지 아닌지
	if (0 == _pList->iCount)
	{
		_pList->pHeadNode = pNode;
	}
	else
	{

		//현재 가장 마지막 노드를 찾아서,
		// 해당 노드의 pNext를 생선시킨 노드의 주소로 채움.
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
