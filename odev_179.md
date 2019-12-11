#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


```
#include <iostream>
 
using namespace std;
 
struct Member1 {
	Member1()
	{
		std::cout << "M1";
	}
};
 
struct Member2 {
	Member2()
	{
		std::cout << "M2";
	}
};
 
class Owner{
public:
	Owner() :m1(), m2() {}
private:
	Member2 m2;
	Member1 m1;
};
 
int main() 
{
	Owner x;
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
