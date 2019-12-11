#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


```
#include <iostream>
#include <map>
 
using namespace std;
 
int main()
{
	map<bool, int> bimap = { { 0, 2 }, { 1, 2 }, { 3, 2 }, { 5, 2 } };
	cout << bimap.size();
 
	map<int, int> iimap = { { 0, 0 }, { 1, 0 }, { 2, 0 }, { 3, 0 } };
 
	cout << iimap.size();
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
