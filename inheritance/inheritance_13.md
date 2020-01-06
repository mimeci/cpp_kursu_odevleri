9
18
24
27
28
44
52
105
119
120
131
133
145
151
184
196
251
254

#### Aşağıdaki C++ programı hakkında yorum yapınız:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir
+ ekrana şunu yazar: 

```
#include <iostream>

struct Base 
{
	void f(int) 
	{ 
		std::cout << "i"; 
	}
};

struct Der : Base 
{
	void f(double) 
	{ 
		std::cout << "d"; 
	}
};

int main() 
{
	Der d;
	d.f(12);
}
```
