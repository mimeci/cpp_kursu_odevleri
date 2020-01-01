#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <iostream>
 
struct B {
	B() { std::cout << "B"; }
	B(const B &) { std::cout << "b"; }
	virtual void f() { std::cout << "1"; }
};
 
struct D : B {
	D() { std::cout << "D"; }
	D(const D &) { std::cout << "d"; }
	virtual void f() { std::cout << "2"; }
};
 
int main()
{
	D a[2];
 
	for (B b : a)
		b.f();
}

```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
