#include "pch.h"
#include "MyString.h"

CMyString::CMyString()
	: m_pszData(nullptr)
	, m_nLength(0)
{

}

CMyString::~CMyString()
{
	Release();
}

int CMyString::SetString(const char* pszParam)
{
	// TODO: 여기에 구현 코드 추가.
	if (pszParam == nullptr || 0) {
		return 0;
	}
	while (pszParam[m_nLength] != '\0') {
		m_nLength++;
	}
	m_pszData = new char[m_nLength];
	for (int i = 0; i < m_nLength; i++) {
		m_pszData[i] = pszParam[i];
	}
	m_pszData[m_nLength] = '\0';

	return 0;
}


const char* CMyString::GetString()
{
	// TODO: 여기에 구현 코드 추가.
	return m_pszData;
}


void CMyString::Release()
{
	// TODO: 여기에 구현 코드 추가.
	if (m_pszData == nullptr) {
		return;
	}
	delete[] m_pszData;
}
