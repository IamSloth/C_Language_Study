#pragma once

struct _tagNode
{
	int iData;
	struct _tagNode* pNextNode;
};

struct _tagList
{
	struct _tagNode* pHeadNode;
	int iCount;
};


//연결형 리스트 초기화
void InitList(struct _tagList* _pList);

//연결형 리스트 데이터값 입력
void PushBack(struct _tagList* _pList, int _iData);

//연결형 리스트 메모리 해제
void ReleaseList(struct _tagList* _pList);
