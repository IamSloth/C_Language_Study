
struct _tagArr
{
	int* pInt;
	int iCount;
	int iMaxCount;
};

//��Ʈ���� ������ ����

//�迭 �ʱ�ȭ �Լ�
void InitArr(struct _tagArr* _pArr);

//�迭 �޸� ���� �Լ�
void ReleaseArr(struct _tagArr* _pArr);

//������ �߰� �Լ�
void PushBack(struct _tagArr* _pArr, int _iData);

// ���� �߰� Ȯ��
void Reallocate(struct _tagArr* _pArr);