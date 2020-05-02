#include "MyString.h"
#include <string.h>
MyString::MyString()
#define NULLPtr 0
:m_pData(NULLPtr),
m_len(0)
{

}

MyString::~MyString()
{
    if (NULLPtr != m_pData)
    {
        delete [] m_pData;
        m_pData = NULLPtr;
        m_len = 0;
    }
    
}
MyString::MyString(const MyString& str)
:m_pData(NULLPtr),
m_len(0)
{   
    if (!str.empty())
    {
         m_len = str.size();
         m_pData = new char[m_len + 1];
         memset(m_pData, 0, m_len + 1);
         memcpy(m_pData, str.c_str(), m_len);
    }   
}

MyString::MyString(const char* str)
:m_pData(NULLPtr),
m_len(0)
{
    if (NULLPtr != str)
    {
        m_len = strlen(str);
        m_pData = new char[m_len + 1];
        memset(m_pData, 0, m_len + 1);
        memcpy(m_pData, str, m_len);
    }    
}

bool MyString::empty()const{ return 0 == m_len;}
unsigned int MyString::size()const{ return m_len;}
char* MyString::c_str()const{return m_pData;}

MyString& MyString::operator = (const MyString& _right)
{
    if (_right.c_str() == m_pData)
    {
        return *this;
    }
    else
    {
        if (_right.size() <= m_len)
        {
            memset(m_pData, 0, m_len);
            m_len = _right.size();
            memcpy(m_pData, _right.c_str(), m_len);
        }
        else
        {
            delete [] m_pData;
            m_len = _right.size();
            m_pData = new char[m_len + 1];
            memset(m_pData, 0, m_len + 1);
            memcpy(m_pData, _right.c_str(), m_len);
        } 

        return *this;
    }    
}

MyString& MyString::operator + (const MyString& _right)
{
    MyString temp(*this);
    delete [] m_pData;
    m_len = temp.size() + _right.size();
    m_pData = new char[m_len + 1];
    memset(m_pData, 0, m_len + 1);
    memcpy(m_pData, temp.c_str(), temp.size());
    memcpy(m_pData + temp.size(), _right.c_str(), _right.size());

    return *this;
}

MyString& MyString::operator += (const MyString& _right)
{
    return *this + _right;
}

MyString& MyString::operator = (const char* _right)
{
    *this = MyString(_right);
    return *this;
}

MyString& MyString::operator + (const char* _right)
{
    return *this + MyString(_right);
}

MyString& MyString::operator += (const char* _right)
{
    return *this + _right;
}