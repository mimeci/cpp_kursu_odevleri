#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <iostream>
#include <exception>
 
int g = 0;
 
struct A {
	A()
	{
		std::cout << 'a';
		if (g++ == 0) {
			throw std::exception();
		}
	}
 
	~A()
	{
		std::cout << 'A';
	}
};
 
struct B {
	B() 
	{
		std::cout << 'b';
	}
	
	~B()
	{
		std::cout << 'B';
	}
	
	A a;
};
 
void foo()
{
	static B b;
}
 
int main()
{
	try {
		foo();
	}
	catch (std::exception &)
	{
		std::cout << 'c';
		foo();
	}
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
