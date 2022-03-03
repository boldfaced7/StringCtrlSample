#include "pch.h"
#include "MyString.h"

CMyString::CMyString()
	: m_pszData(nullptr)
	, m_nLength(0)
{

}

CMyString::CMyString(const CMyString& rhs)
	: m_pszData(nullptr)
	, m_nLength(0) 
{
	SetString(rhs.GetString());
}

explicit CMyString::CMyString(const char* pszParam)
	: m_pszData(nullptr)
	, m_nLength(0)
{
	SetString(pszParam);
}

CMyString::~CMyString()
{
	Release();
}

int CMyString::SetString(const char* pszParam)
{
	// TODO: 여기에 구현 코드 추가.
	Release();

	if (pszParam == nullptr || 0) {
		return 0;
	}
	while (pszParam[m_nLength] != '\0') {
		m_nLength++;
	}
	m_pszData = new char[m_nLength + 1];
	for (int i = 0; i < m_nLength; i++) {
		m_pszData[i] = pszParam[i];
	}
	m_pszData[m_nLength] = '\0';

	return m_nLength;
}


const char* CMyString::GetString() const
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
	m_pszData = nullptr;
	m_nLength = 0;
}

CMyString& CMyString::operator=(const CMyString& rhs) {
	SetString(rhs.GetString());

	return *this;
}

CMyString::operator char*(void)
{
	return m_pszData;
}