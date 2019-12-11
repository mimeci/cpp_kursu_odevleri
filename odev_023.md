#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


```
#include <iostream> 
 
typedef long long verylong;
 
void func(unsigned verylong)
{
	std::cout << "1";
}
 
void foo(unsigned long long) 
{
	std::cout << "2";
}
 
int main()
{
	func(10ull);
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
