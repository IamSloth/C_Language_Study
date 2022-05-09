#include "CArr.h"
#include <assert.h>


CArr::CArr()
	: m_pInt(nullptr)
	, m_iCount(0)
	, m_iMaxCount(2)
{
	m_pInt = new int[2];
}

CArr::~CArr()
{
	delete[] m_pInt;
}


void CArr::push_back(int _iData)
{
	if (m_iMaxCount <= m_iCount)
	{
		resize(m_iMaxCount * 2);
	}
	m_pInt[m_iCount] = _iData;
	m_iCount++;
}

void CArr::resize(int _iResizeCount)
{
	if (_iResizeCount <= m_iMaxCount)
	{
		assert(nullptr);
	}

	int* pNew = new int[_iResizeCount];

	for (int i = 0; i < m_iCount; i++)
	{
		pNew[i] = m_pInt[i];
	}

	delete[] m_pInt;
	m_pInt = pNew;
	m_iMaxCount = _iResizeCount;

}

int& CArr::operator[](int idx)
{
	return m_pInt[idx];
}
