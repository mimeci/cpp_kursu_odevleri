# Vector sınıfı

Aşağıda ismi `Vector` olan bir sınıfın tanımlandığı başlık dosyası yer almaktadır. 
Bu ödevde `Vector` sınıfının kodlarını yazmanız isteniyor.
+ `Vector` sınıfı türünden bir nesne bir dinamik diziyi `(dynamic array)` temsil etmektedir. Bu ödevi yapabilmek için dinamik dizi veri yapısı hakkında temel bilgilere sahip olmalısınız.


### Aşağıdaki açıklamalar kodda bulunan yorum satırlarına ilişkindir:
1. içsel _(nested)_ iterator türü. Kaptaki öğelerin konumlarını tutan _iterator_ nesnelerinin türü. Okuma ve yazma erişimi sağlar.
2. içsel _(nested)_ const_iterator türü. Kaptaki öğelerin konumlarını tutan _const\_iterator_ nesnelerinin türü. Yalnızca okuma erişimi sağlar.

3. Varsayılan kurucu işlev _(default constructor)_. Boş bir _Vector_ oluşturur.
4. Sonlandırıcı işlev _(destructor)_. Kaynakları geri verir.
5. Kopyalayan kurucu işlev. _(copy constructor)_
6. Taşıyan kurucu işlev. _(move constructor)_
7. Kopyalayan atama işlevi. _(copy assignment)__
8. Taşıyan atama işlevi. _(move assignment)__

```
class Vector {
public:

	//--------------------------------------------------
	// type members
	class iterator;       //1
	class const_iterator; //2
	//--------------------------------------------------


	//--------------------------------------------------
	// special member functions

	Vector();                            //3
	~Vector();			     //4
	Vector(const Vector &);              //5
	Vector(Vector &&);                   //6
	Vector& operator=(const Vector&);    //7
	Vector& operator=(Vector&&);         //8
	//--------------------------------------------------


	//--------------------------------------------------
	//constructors
	Vector(size_t size);
	Vector(std::initializer_list<int> ilist);
	Vector(const int *pbegin, const int *pend);
	//--------------------------------------------------

	
	void reserve(size_t new_cap);
	void shrink_to_fit();

	iterator begin();
	iterator end();
	const_iterator begin()const;
	const_iterator end()const;

	
	//setters/mutators
	Vector& operator=(std::initializer_list<int> ilist);
	void resize(size_t, int val = 0);
	
	void assign(size_t n, int val);
	void assign(std::initializer_list<int> ilist);
	void assign(const int* pbeg, const int* pend);

	void swap(Vector &other);
	void clear();

	int &front();
	const int &front()const;
	int &back();
	const int &back()const;
	int& operator[](size_t idx);
	const int& operator[](size_t idx)const;

	//--------------------------------------------------

	int* data();
	const int* data()const;

	size_t capacity()const;
	size_t size()const;
	bool empty()const;
	

	//--------------------------------------------------
	//type members
	class iterator {
		//...
	public:
		iterator& operator++();
		iterator operator++(int);
		
		int& operator*(size_t idx);
		int &operator[](size_t idx);
		bool operator<(iterator)const;
		bool operator<=(iterator)const;
		bool operator>(iterator)const;
		bool operator>=(iterator)const;
		bool operator==(iterator)const;
		bool operator!=(iterator)const;
	};

	class const_iterator {
		//...
	public:
		const_iterator& operator++();
		const_iterator operator++(int);

		const int& operator*(size_t idx);
		const int &operator[](size_t idx);
		bool operator<(iterator)const;
		bool operator<=(iterator)const;
		bool operator>(iterator)const;
		bool operator>=(iterator)const;
		bool operator==(iterator)const;
		bool operator!=(iterator)const;
	};


};
	
};
```
