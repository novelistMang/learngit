 ///
 /// @file    staticMember.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-06-07 11:36:00
 ///
 
#include <iostream>
using std::cout;
using std::endl;


class Computer
{
public:
	Computer(float price)
	: _price(price)
	{
		cout << "Computer(float)" << endl;
		_totalPrice += _price;
	}


	~Computer()
	{
		cout << "~Computer()" << endl;
		_totalPrice -= _price;
	}

	void print()
	{
		cout << "总价:" << _totalPrice << endl;
	}

private:
	float _price;
	static float _totalPrice;//存储在全局静态区
};

//静态数据成员的初始化, 被该类的所有对象共享
float Computer::_totalPrice = 0.0;

int a = 3;

int main(void)
{
	
	cout << "sizeof(Computer) = " << sizeof(Computer) << endl;

	cout << "购买电脑:" << endl;
	Computer pc1(5000);
	pc1.print();

	Computer pc2(6000);
	pc2.print();

	Computer pc3(4000);
	pc3.print();
	cout << "退还电脑:" << endl;

	pc2.~Computer();
	pc2.print();

	return 0;

}
