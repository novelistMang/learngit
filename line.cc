///
/// @file    line.cc
/// @author  mangye1(limangyuan@163.com)
/// @date    2017-06-07 20:40:54
/// 

#include <iostream>
using std::cout;
using std::endl;

class point
{
public:
    point()
    :_ix(0)
    ,_iy(0)
    {
        cout<<"point()"<<endl;
    }
    point(int x,int y=0)
    :_ix(x)
    ,_iy(y)
    {
        cout<<"point(int,int)"<<endl;
    }
    void print()
    {
        cout<<"("<<_ix<<","<<_iy<<")";
    }
private:
    int _ix;
    int _iy;
};

class line
{
public:
    line(int x1,int y1,int x2,int y2)
    :_pt1(x1,y1)
    ,_pt2(x2,y2)
    {
        cout<<"line(int,int,int,int)"<<endl;
    }
    void display()
    {
        _pt1.print();
        cout<<" ---> ";
        _pt2.print();
        cout<<endl;
    }
private:
    point _pt1;
    point _pt2;
};

int main()
{
    int a=3;
    int b(1);

    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    line line1(3,5,6,7);
    line1.display();

    return 0;
}
