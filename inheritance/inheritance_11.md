According to the C++17 standard, what is the output of this program?

a) it is guranteed to output : 
b) syntax error
c) undefined behavior
d) implementation defined / specified

```
#include <iostream>

struct Base {
	virtual void vfunc() const
	{
		std::cout << "B"; 
	}
};

struct Der : public Base {
	void vfunc() const 
	{
		std::cout << "D";
	}
};

void print(const Base& baseref) 
{
	baseref.vfunc();
}

int main() 
{
	Base a[1];
	Der y1;
	a[0] = y1;
	print(y1);
	print(a[0]);
}

```
