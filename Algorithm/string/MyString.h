#pragma once

class MyString
{
public:
    MyString(/* args */);
    MyString(const MyString& str);
    MyString(const char* str);

    MyString& operator = (const MyString& _right);
    MyString& operator + (const MyString& _right);
    MyString& operator += (const MyString& _right);
    MyString& operator = (const char* _right);
    MyString& operator + (const char* _right);
    MyString& operator += (const char* _right);

    char* c_str(){return m_pData;} 
    unsigned int size(){return m_len;} 
    bool empty(){return 0 == m_len;}

    char* c_str()const;
    unsigned int size()const; 
    bool empty()const;
    ~MyString();

private:
    char* m_pData;
    unsigned int m_len;
};

