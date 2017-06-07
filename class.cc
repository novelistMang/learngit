
 /// @file    class.cc
 /// @author  mangye1(limangyuan@163.com)
 /// @date    2017-06-06 14:19:18
 
#include <iostream>
#include <cstring>
using namespace std;
class computer
{
private:
    char* brand;
    float price;
public:
    computer(const char* sz,float p)
    {
        brand=new char[strlen(sz)+1];
        strcpy(brand,sz);
        price=p;
    }
    ~computer()
    {
        delete[] brand;
        brand=NULL;
        cout<<"clean data"<<endl;
    }
    void print()
    {
        cout<<"品牌："<<brand<<endl;
        cout<<"价格："<<price<<endl;
    }
};
//#include "computer.h"
int main()
{
    computer comp("Dell",7000);
    comp.print();
    return 0;
}
