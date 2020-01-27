#### Aşağıdaki C++ programı hakkında yorum yapınız:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir
+ ekrana şunu yazar: 

```
#include <iostream>

class Nec {
	int x{};

public:
	int& getx() { return x; }
	void print(){ std::cout << x; }
};

int main() 
{
	Nec nec;
	auto y = nec.getx();
	++y;
	nec.print();
}
