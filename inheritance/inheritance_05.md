#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


```
#include <iostream>
 
struct Base {
	virtual void func() const
	{
		std::cout << "B";
	}
};
 
struct Der : public Base {
	void func() const override
	{
		std::cout << "D";
	}
};
 
void display(const Base &x)
{ 
	x.func();
}
 
int main() 
{
	Base a[1];
	Der der1;
	a[0] = der1;
	display(der1);
	display(a[0]);
}

```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
