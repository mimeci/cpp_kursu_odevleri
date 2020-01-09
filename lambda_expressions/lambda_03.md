#### Aşağıdaki C++ programı hakkında yorum yapınız:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir
+ ekrana şunu yazar: 

```
#include <iostream>

int main()
{
	int x = 9;
	int y = 20;

	auto f = [&x = x, y = x + 5]{ return ++x * y; };
	std::cout << f() << "\n";
	std::cout << "x = " << x  << "\n";
}

```
