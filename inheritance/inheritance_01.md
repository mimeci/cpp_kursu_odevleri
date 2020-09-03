#### Aşağıdaki C++ programı hakkında yorum yapınız:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir
+ ekrana şunu yazar: 

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

[ödevin cevabı](https://vimeo.com/454377188)
