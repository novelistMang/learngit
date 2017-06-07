
 /// @file    inline.cc
 /// @author  mangye1(limangyuan@163.com)
 /// @date    2017-06-06 10:14:54
 
#include <iostream>
using std::cout;
using std::endl;
#define MAX(a,b) {(a)>(b)?(a):(b)}
inline int max(int a,int b)
{
    return a>b?a:b
}
int main()
{
    int x=3,y=4;
    max(x,y);
    MAX(x,y);
    return 0;
}
