### Aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <iostream>

template<typename T>
void func(T)
{
	std::cout << "1";
}

template<typename T>
void f(const T *)
{
	std::cout << "2";
}

int main()
{
	int ival{ 20 };
	const int cx{ 30 };
	int *ptr{ &ival };
	const int *cp{ &cx };

	func(42);
	func(ci);
	func(ptr);
	func(cp);
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası `(syntax error)`
+ Tanımsız davranış `(undefined behavior)`
+ Derleyiciye göre değişir `(implementation defined / specified)`

