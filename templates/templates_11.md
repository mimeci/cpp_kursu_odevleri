#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

```
#include <iostream>
#include <type_traits>
 
int main()
{
	if (std::is_signed<char>::value){
		std::cout << std::is_same<char, signed char>::value;
	}
	else{
		std::cout << std::is_same<char, unsigned char>::value;
	}
}

```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
