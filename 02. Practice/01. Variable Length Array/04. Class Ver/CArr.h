#pragma once

class CArr
{
private:
	int*	m_pInt;
	int		m_iCount;
	int		m_iMaxCount;
	
public:
	void push_back(int _iData);
	void resize(int _iResizeCount);

	int& operator[] (int idx);

public:
	CArr();
	~CArr();
};

