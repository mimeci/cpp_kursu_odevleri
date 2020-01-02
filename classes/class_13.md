#### Aşağıdaki C++ programı hakkında yorum yapınız:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir
+ ekrana şunu yazar: 

```
#include <iostream>

class C {
public:
	explicit C(int) 
	{
		std::cout << "i";
	};
	C(char) 
	{
		std::cout << "c";
	};
};

int main() 
{
	C c1{ 7 };
	C c2 = 7;
}

```
