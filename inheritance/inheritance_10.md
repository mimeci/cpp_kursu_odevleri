#include <iostream>


class B
{
public:
	B() { std::cout << "B default\n"; }
	B(const B &) { std::cout << "b copy\n"; }
};

class D1 : public virtual B
{
public:
	D1() { std::cout << "D1 default\n"; }
	D1(const D1 &) { std::cout << "d1 copy\n"; }
};

class D2 : public virtual B
{
public:
	D2() { std::cout << "D2 default\n"; }
	D2(const D2 &) { std::cout << "d2 copy\n"; }
};

class MD :D1, D2
{
public:
	MD() { std::cout << "M default\n"; }
	MD(const MD &) { std::cout << "m copy\n"; }
};

int main()
{
	MD d1;
	MD d2(d1);
}
