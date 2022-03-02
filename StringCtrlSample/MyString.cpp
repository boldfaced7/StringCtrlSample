#include "pch.h"
#include "MyString.h"

CMyString::CMyString()
	: m_pszData(nullptr)
	, m_nLength(0)
{

}

CMyString::~CMyString()
{

}

int CMyString::SetString(const char* pszParam)
{
	// TODO: 여기에 구현 코드 추가.
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
}
