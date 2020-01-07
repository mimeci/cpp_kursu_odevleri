#### Aşağıdaki C++ programı hakkında yorum yapınız:

+ sentaks hatası
+ tanımsız davranış
+ derleyiciye göre değişir
+ ekrana şunu yazar: 

```
#include <iostream>

template<typename T>
T sum(T t) 
{
	return t;
}

template<typename T, typename ...Ts>
T sum(T t, Ts... args)
{
	return t + sum<T>(args...);
}

int main() 
{
	auto x = sum(0.5, 1, 0.5, 1);
	auto y = sum(1, 0.5, 1, 0.5);

	std::cout << x << y;
}
```
