
 /// @file    cmpt.cc
 /// @author  mangye1(limangyuan@163.com)
 /// @date    2017-06-07 11:07:26
 /// 

#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class computer
{
public:
    computer(const char *name,float num)
    :_brand(new char[strlen(name)+1]())
    ,_price(num)
    {
        cout<<"computer(const char *name,float num) is run"<<endl;
        strcpy(_brand,name);
    }

    computer(const computer & rsh)
    :_brand(new char[strlen(rsh._brand)+1]())
    ,_price(rsh._price)
    {
        cout<<"computer(const computer & rsh) is run"<<endl;
        strcpy(_brand,rsh._brand);
    }

    computer & operator=(const computer & rsh)
    {
        if(this!= &rsh)
        {
            cout<<"computer & operator=(const computer & rsh)  is run"<<endl;
            delete [] _brand;
            _brand=new char[strlen(rsh._brand)+1]();
            strcpy(_brand,rsh._brand);
            _price=rsh._price;
        }
        return *this;
    }

    ~computer()
    {
        cout<<"~computer() is run"<<endl;
        delete [] _brand;
        _brand=NULL;
    }

    void print()
    {
        cout<<"品牌:"<<_brand<<endl;
        cout<<"价格:"<<_price<<endl;
    }

private:
    char * _brand;
    float _price;
};

int main()
{
    computer pc1("LENVON",5000);
    pc1.print();

    computer pc2("Thinkpad",6170);
    pc2.print();

    computer pc3=pc2;
    pc3.print();

    pc2=pc1;
    pc2.print();

    return 0;
}
