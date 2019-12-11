#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <iostream>
 
class A;
 
class B {
	B() 
	{
		std::cout << "B";
	}
public:
	friend B A::createObject();
};
 
class A {
public:
	A()
	{ 
		std::cout << "A";
	}
 
	B createObject()
	{ 
		return B();
	}
};
 
int main() 
{
	A a;
	B b = a.createObject();
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
