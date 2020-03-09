# Fraction sınıfı

Aşağıda ismi `Vector` olan bir sınıfın tanımlandığı başlık dosyası yer almaktadır. 
Bu ödevde `Vector` sınıfının kodlarını yazmanız isteniyor.
+ `Vector` sınıfı türünden bir nesne bir dinamik diziyi `(dynamic array)` temsil etmektedir. Bu ödevi yapabilmek için dinamik dizi veri yapısı hakkında temel bilgilere sahip olmalısınız.


### Aşağıdaki açıklamalar kodda bulunan yorum satırlarına ilişkindir:



```
#include <cstddef>


class Vector {
public:
	Vector(size_t size);
	
	int &front();
	int &back();
	int& operator[](size_t idx)const;
	int* data();
	const int* data()const;

	size_t capacity()const;
	size_t size()const;
	
};
```
