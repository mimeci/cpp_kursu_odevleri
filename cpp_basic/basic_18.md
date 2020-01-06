#### Aşağıdaki C++ programı hakkında yorum yapınız:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir
+ ekrana şunu yazar: 

```
#include <iostream>
#include <limits>

int main() 
{
	auto a = std::numeric_limits<unsigned int>::max();
	decltype(a) b = 0;
	std::cout << (--b == a);
	std::cout << ++a;
}
```
