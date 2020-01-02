#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <algorithm>
#include <iostream>
#include <string>
 
int main() 
{
	std::string s1{ "AA" };
	std::string s2{ "AA" };
 
	const auto &smax{ std::max(s1, s2) };
	const auto &smin{ std::min(s1, s2) };
	s1 += "A";
	s2 += "B";
 
	std::cout << smax << smin;
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
