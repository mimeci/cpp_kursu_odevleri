#### Aşağıdaki C++ programı hakkında yorum yapınız:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir
+ ekrana şunu yazar: 

```
#include<iostream>

int func()
{
	return 0;
}

struct Nec
{
	static int ival;
	static int func()
	{
		return 1;
	}
};

int Nec::ival = func();

int main()
{
	std::cout << Nec::ival;
}
```
