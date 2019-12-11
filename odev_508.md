#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


```
#include <iostream>
 
struct Base {
	Base() {
		vfunc(); 
	}
	
	virtual ~Base() {
		vfunc(); 
	}
	
	virtual void vfunc() 
	{
		std::cout << "B";
	}
	
	void foo()
	{
		vfunc();
	}
};
 
struct Der : public Base {
	virtual void vfunc() override
	{
		std::cout << "D";
	}
};
 
int main()
{
	Der b;
	b.foo();
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
