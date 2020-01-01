#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


```
#include <iostream>
 
class Base {
public:
	virtual void vfunc(int x = 1)
	{
		std::cout << x;
	}
};
 
class Der : public Base {
public:
	virtual void vfunc(int x = 2)override
	{
		std::cout << x;
	}
};
 
void foo(Base &r)
{
	r.vfunc();
}
 
int main()
{
	Der myder;
	foo(myder);
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
