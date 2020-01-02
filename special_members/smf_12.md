#### Aşağıdaki C++ programı hakkında yorum yapınız:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir
+ ekrana şunu yazar: 

```
#include <iostream>

struct Nec {
	Nec() { std::cout << "1"; }
	Nec(const Nec &a) { std::cout << "2"; }
	virtual void func() { std::cout << "3"; }
};

int main() {
	Nec a[2];
	for (auto n : a) {
		n.func();
	}
}

```
