
/// @file    string.cc
/// @author  mangye1(limangyuan@163.com)
/// @date    2017-06-06 22:11:02

#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class String
{
public:
    String()
    :_pstr(new char [1] ())
    {}
    String(const char *pstr)
    :_pstr(new char [strlen(pstr)+1] ())
    {
        strcpy(_pstr,pstr);
    }
    String(const String & rhs)
    :_pstr(new char [strlen(rhs._pstr)+1] ())
    {
        strcpy(_pstr,rhs._pstr);
    }
    ~String()
    {
        delete [] _pstr;
        _pstr=NULL;
    }
    void print()
    {
        cout << _pstr << endl;
    }
private:
    char * _pstr;
};

int main(void)
{
    String str1;
    str1.print();
    String str2 = "Hello,world";
    String str3("wangdao");
    str2.print();       
    str3.print();   
    String str4 = str3;
    str4.print();
    return 0;
}
