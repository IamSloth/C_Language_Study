
struct _tabArr
{
	int* pInt;
	int iCount;
	int iMaxCount;
};

//��Ʈ���� ������ ����

//�迭 �ʱ�ȭ �Լ�
void InitArr(struct _tabArr* _pArr);

//�迭 �޸� ���� �Լ�
void ReleaseArr(struct _tabArr* _pArr);

//������ �߰� �Լ�
void PushBack(struct _tabArr* _pArr, int _iData);

// ���� �߰� Ȯ��
void Reallocate(struct _tabArr* _pArr);