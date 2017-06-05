 ///
 /// @file    namespace5.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-05 10:47:02
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int x=10;
 namespace A
{
	int x=20;
}
namespace B
{
	int x=30;
}
void print(int x)
{
	cout << "形参x=" << x <<endl
