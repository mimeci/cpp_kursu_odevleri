#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


```
#include <iostream>
 
class Base {
public:
	virtual void vfunc()
	{
		std::cout << "1";
	}
	Base()
	{
		vfunc();
	}
 
	~Base()
	{
		vfunc();
	}
 
};
 
class Der : public Base {
	virtual void vfunc()override
	{
		std::cout << "2";
	}
 
public:
	
	void foo()
	{
		Base::vfunc();
		vfunc();
	}
};
 
int main()
{
	Der myder;
	myder.foo();
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
