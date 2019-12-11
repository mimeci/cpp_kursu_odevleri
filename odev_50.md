#### Aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <iostream>

class Base {
public:
	void func(int)
	{
		std::cout << "int";
	}
};

class Der : public Base {
public:
	void func(double)
	{
		std::cout << "double";
	}
};

int main()
{
	Der der;
	der.func(10);
}
```
