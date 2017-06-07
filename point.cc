 ///
 /// @file    point.cc
 /// @author  mangye1(limangyuan@163.com)
 /// @date    2017-06-07 14:43:55
 /// 
 
#include <iostream>
using std::cout;
using std::endl;

class point
{
public:
 /*   point()
    : _ix(0)
    , _iy(0)
    {}   */
    point(int a=0,int b=0)
    : _ix(a)
    , _iy(b)
    {}
    void print()
    {
        cout << "(" << this->_ix<< "," << this->_iy<< ")" << endl;
    }
private:
    int _ix;
    int _iy;
};

int main()
{
    point first;
    first.print();

    point sencond(5);
    sencond.print();

    point tri(6,7);
    tri.print();

    point four=tri;
    four.print();

    return 0;
}
