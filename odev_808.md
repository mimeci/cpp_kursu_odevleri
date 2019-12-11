#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


```
#include <iostream>
 
template <class T> 
void func(T &x) 
{ 
	std::cout << "1"; 
}
 
template <> 
void func(const int &x)
{
	std::cout << 2;
}
 
int main()
{
	int ival = 0;
	func(ival);
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
