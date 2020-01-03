According to the C++17 standard, what is the output of this program?

a) it is guranteed to output : 
b) syntax error
c) undefined behavior
d) implementation defined / specified

```
#include <iostream>

struct Base {
	virtual std::ostream &put(std::ostream &os) const 
	{
		return os << 'B';
	}
};

struct Der : Base {
	virtual std::ostream &put(std::ostream &os) const 
	{
		return os << 'D';
	}
};

std::ostream &operator<<(std::ostream &os, const Base &baseref)
{
	return baseref.put(os);
}

int main() {
	Der der;
	std::cout << der;
}
```
