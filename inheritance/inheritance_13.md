#### Aşağıdaki C++ programı hakkında yorum yapınız:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir
+ ekrana şunu yazar: 

```
#include <iostream>

struct Base 
{
	void f(int) 
	{ 
		std::cout << "i"; 
	}
};

struct Der : Base 
{
	void f(double) 
	{ 
		std::cout << "d"; 
	}
};

int main() 
{
	Der d;
	d.f(12);
}
```
