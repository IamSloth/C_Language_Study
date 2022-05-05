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


//������ ����Ʈ �ʱ�ȭ
void InitList(struct _tagList* _pList);

//������ ����Ʈ �����Ͱ� �Է�
void PushBack(struct _tagList* _pList, int _iData);

//������ ����Ʈ �޸� ����
void ReleaseList(struct _tagList* _pList);
