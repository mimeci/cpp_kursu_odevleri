According to the C++17 standard, what is the output of this program?

a) it is guranteed to output : 
b) syntax error
c) undefined behavior
d) implementation defined / specified

```
#include <iostream>

int main() 
{
	void *vp = &vp;
	std::cout << (vp &&& vp);
}

```
