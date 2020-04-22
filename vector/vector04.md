#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


```
#include <iostream>
#include <vector>
 
int main() 
{
	std::vector<int> vec1(4);
	std::vector<int> vec2(3, 2);
	std::vector<int> vec3{1, 2};
	std::vector<int> vec4{6};
	std::vector<int> vec5;
 
	std::cout << vec1.size() << vec2.size() <<
	vec3.size() << vec4.size() << vec5.size();
}
```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(unspecified / implementation defined)*
