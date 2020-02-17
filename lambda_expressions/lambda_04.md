#### Aşağıdaki C++ programı hakkında yorum yapınız:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir
+ ekrana şunu yazar: 

```
#include <iostream>

int g = 2;

int main() 
{
	auto f = [](int x) { return g * x; };

	std::cout << f(3);
}
```
