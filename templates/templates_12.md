#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <iostream>
#include <utility>
 
int func(int &)
{
	return 1;
}
 
int func(int &&)
{
	return 2;
}
 
template <typename T>
int f1(T &&x) 
{
	return func(x);
}
 
template <typename T>
int f2(T &&x)
{
	return func(std::move(x));
}
 
template <typename T>
int f3(T &&x)
{
	return func(std::forward<T>(x));
}
 
int main()
{
	int ival = 10;
 
	std::cout << f1(ival) << f1(20);
	std::cout << f2(ival) << f2(20);
	std::cout << f3(ival) << f3(20);
 
	return 0;
}

```


__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
