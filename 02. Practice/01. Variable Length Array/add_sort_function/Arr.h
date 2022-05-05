struct _tagArr
{
	int* pInt;
	int iCount;
	int iMaxCount;
};


void InitArr(struct _tagArr* _pArr);

void PushBack(struct _tagArr* _pArr, int _iData);

void FreeArr(struct _tagArr* _pArr);

void Sort(_tagArr* _pArr, const char asc_Or_dsc[5]);

void BubbleSort(_tagArr* _pArr, const char asc_Or_dsc[5]);

//void ReMalloc(struct _tagArr* _pArr); //ªË¡¶«ÿµµµ 
