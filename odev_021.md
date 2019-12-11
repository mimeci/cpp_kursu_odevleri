#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <iostream>
 
template<typename T>
void func(T x)
{
	static int count = 0;
	++count;
	std::cout << count;
}
 
int main()
{
	char c1 = 0;
	signed char c2 = 0;
	unsigned char c3 = 0;
 
	func(c1);
	func(c2);
	func(c3);
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
