#### Aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <iostream>


template<typename T>
void foo(T)
{
	std::cout << "1";
}

template<typename T>
void foo(T *)
{
	std::cout << "2";
}

int main()
{
	int ival{ 20 };
	const int cx{ 30 };
	int *ptr{ &ival };
	const int *cp{ &cx };

	foo(42);
	foo(cx);
	foo(ptr);
	foo(cp);
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası _(syntax error)_.
+ Tanımsız davranış _(undefined behavior)_.
+ Derleyiciye göre değişir _(implementation defined / specified)_.
