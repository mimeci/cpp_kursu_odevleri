#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <iostream>
 
struct Base1 {
	Base1() { std::cout << "B1"; }
};
 
struct Base2 {
	Base2() { std::cout << "B2"; }
};
 
struct Der : Base2, Base1 {
	Der() { std::cout << "D"; }
};
 
 
struct Member {
	Member() { std::cout << "M"; }
};
 
struct A : Der {
	A() : m(), Der() { std::cout << "A"; }
 
	Member m;
};
 
int main()
{
	A a;	
}
``` 

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
