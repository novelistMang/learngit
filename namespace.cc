 ///
 /// @file    namespace.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-05 09:57:42
 ///
 
#include <iostream>

using namespace std;

namesapce A
{
	int x=10;
	void displayA()
	{
		cout << "displayA()" <<endl;
	}
}
namesapce B
{
	int y=20;
	void displayB()
	{
		cout << "displayB()" <<endl;
	}
}

int main()
{
	A::displayA();
	B::displayB();
	cout << "A::x="
}
