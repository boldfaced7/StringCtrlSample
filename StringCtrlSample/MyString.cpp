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
	// TODO: ���⿡ ���� �ڵ� �߰�.
	return 0;
}


const char* CMyString::GetString()
{
	// TODO: ���⿡ ���� �ڵ� �߰�.
	return m_pszData;
}


void CMyString::Release()
{
	// TODO: ���⿡ ���� �ڵ� �߰�.
}
