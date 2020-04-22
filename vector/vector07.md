#### Aşağıdaki C++ programı derlenip çalıştırıldığında ekrana ne yazar:

```
#include <iostream>
#include <vector>

int f() { std::cout << "f"; return 1; }
int g() { std::cout << "g"; return 2; }

void foo(std::vector<int>) {}

int main() 
{
	foo({ f(), g() });
}
```

Cevabınız aşağıdak seçeneklerden biri de olabilir:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir.
