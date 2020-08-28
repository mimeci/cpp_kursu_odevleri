#### Aşağıdaki C++ programı hakkında yorum yapınız:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir
+ ekrana şunu yazar: 

```
#include <iostream>

struct Base {
	virtual void vfunc() const
	{
		std::cout << "B"; 
	}
};

struct Der : public Base {
	void vfunc() const 
	{
		std::cout << "D";
	}
};

void print(const Base& baseref) 
{
	baseref.vfunc();
}

int main() 
{
	Base a[1];
	Der y1;
	a[0] = y1;
	print(y1);
	print(a[0]);
}

```
