



```
#include <cstddef>


class Vector {
public:
	Vector(size_t size);
	
	int &front();
	int &back();
	int& operator[](size_t idx)const;
	int* data();
	const int* data()const;

	size_t capacity()const;
	size_t size()const;
	
};
```
