# Vector sınıfı

Aşağıda ismi `Vector` olan bir sınıfın tanımlandığı başlık dosyası yer almaktadır. 
Bu ödevde `Vector` sınıfının kodlarını yazmanız isteniyor.
+ `Vector` sınıfı türünden bir nesne bir dinamik diziyi `(dynamic array)` temsil etmektedir. Bu ödevi yapabilmek için dinamik dizi veri yapısı hakkında temel bilgilere sahip olmalısınız.


### Aşağıdaki açıklamalar kodda bulunan yorum satırlarına ilişkindir:



```
#include <cstddef>
#include <initializer_list>
#include <vector>

class Vector {
public:
	//special members
	Vector();
	~Vector();
	Vector(const Vector &);
	Vector(Vector &&);
	Vector& operator=(const Vector&);
	Vector& operator=(Vector&&);

	void reserve(size_t new_cap);
	void shrink_to_fit();

	//constructors
	Vector(size_t size);
	Vector(std::initializer_list<int> ilist);
	Vector(const int *pbegin, const int *pend);

	//setters
	Vector& operator=(std::initializer_list<int> ilist);
	void resize(size_t);
	void resize(size_t, int val);
	
	void assign(size_t n, int val);
	void assign(std::initializer_list<int> ilist);
	void assign(const int* pbeg, const int* pend);

	void swap(Vector &other);

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
