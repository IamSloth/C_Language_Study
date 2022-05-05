
struct _tagArr
{
	int* pInt;
	int iCount;
	int iMaxCount;
};

//컨트롤쩜 누르고 엔터

//배열 초기화 함수
void InitArr(struct _tagArr* _pArr);

//배열 메모리 해제 함수
void ReleaseArr(struct _tagArr* _pArr);

//데이터 추가 함수
void PushBack(struct _tagArr* _pArr, int _iData);

// 공간 추가 확장
void Reallocate(struct _tagArr* _pArr);