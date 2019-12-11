#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


```
#include <iostream>
 
struct Base {
	virtual void vfunc() = 0;
};
 
struct Der : public Base {
	void vfunc()override
	{
		std::cout << "Der::vfunc()\n";
	}
};
 
void Base::vfunc()
{
	std::cout << "Base::vfunc()\n";
}
 
int main()
{
	Der myder;
 
	((Base &)myder).vfunc();
}

```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*

