#include<iostream>
#include "string\MyString.h"
using namespace std;

int main()
{
    MyString str;
    str += "Hello";
    cout << str.c_str() << endl;

    MyString copyStr(str);
    cout << copyStr.c_str() << endl;

    copyStr += MyString("World");
    cout << copyStr.c_str() << endl;

    MyString str2("Mystring");
    cout << str2.c_str() << endl;

    str2 = str + copyStr + str2;
    cout << str2.c_str() << endl;
    return 0;
}