#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


```
#include <functional>
#include <iostream>
 
template <typename T>
void tfunc(std::function<void(T)> f, T val)
{
	f(val);
}
 
int main()
{
	auto f = [](int ival) { std::cout << ival; };
	tfunc(f, 42);
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
