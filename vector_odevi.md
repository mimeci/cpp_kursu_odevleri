# Vector sınıfı

Aşağıda ismi `Vector` olan bir sınıfın tanımlandığı başlık dosyası yer almaktadır. 
Bu ödevde `Vector` sınıfının kodlarını yazmanız isteniyor.
+ `Vector` sınıfı türünden bir nesne bir dinamik diziyi `(dynamic array)` temsil etmektedir. Bu ödevi yapabilmek için dinamik dizi veri yapısı hakkında temel bilgilere sahip olmalısınız.


### Aşağıdaki açıklamalar kodda bulunan yorum satırlarına ilişkindir:



```
#include <cstddef>
#include <initializer_list>

class Vector {
public:
	//special members
	Vector();
	~Vector();
	Vector(const Vector &);
	Vector(Vector &&);
	Vector& operator=(const Vector&);
	Vector& operator=(Vector&&);

	//constructors
	Vector(size_t size);
	Vector(std::initializer_list<int> ilist);
	Vector(const int *pbegin, const int *pend);

	int &front();
	const int &front()const;
	int &back();
	const int &back()const;
	int& operator[](size_t idx);
	const int& operator[](size_t idx)const;
	
	int* data();
	const int* data()const;

	size_t capacity()const;
	size_t size()const;
	
};
```
