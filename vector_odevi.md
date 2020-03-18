# Vector sınıfı

Aşağıda ismi _Vector_ olan bir sınıfın tanımlandığı başlık dosyası yer almaktadır. 
Bu ödevde _Vector_ sınıfının kodlarını yazmanız isteniyor.
+ _Vector_ sınıfı türünden bir nesne bir dinamik diziyi _(dynamic array)_ temsil etmektedir. Bu ödevi yapabilmek için dinamik dizi veri yapısı hakkında temel bilgilere sahip olmalısınız.


### Aşağıdaki açıklamalar kodda bulunan yorum satırlarına ilişkindir:
__1.__ İçsel _(nested)_ iterator türü. Kaptaki öğelerin konumlarını tutan _iterator_ nesnelerinin türü. Okuma ve yazma erişimi sağlar.
__2.__ İçsel _(nested)_ const_iterator türü. Kaptaki öğelerin konumlarını tutan _const\_iterator_ nesnelerinin türü. Yalnızca okuma erişimi sağlar.

__3.__ Varsayılan kurucu işlev _(default constructor)_. Boş bir _Vector_ oluşturur.
__4.__ Sonlandırıcı işlev _(destructor)_. Kaynakları geri verir.
__5.__ Kopyalayan kurucu işlev. _(copy constructor)_
__6.__ Taşıyan kurucu işlev. _(move constructor)_
__7.__ Kopyalayan atama işlevi. _(copy assignment)_
__8.__ Taşıyan atama işlevi. _(move assignment)_
__9.__ Kurucu işlev. _Vector_'ü değeri _val_ olan _size_ tane öğe ile başlatır.
__10.__ _std::initializer_list_ parametreli kurucu işlev. _Vector_ nesnesini listedeki değerleri tutacak şekilde başlatır. 
__11.__ Aralık _(range)_ parametreli kurucu işlev. _Vector_ nesnesini bu aralıktaki değerleri tutacak şekilde başlatır. 
__12.__ Aralık _(range)_ parametreli kurucu işlev. _Vector_ nesnesini bu aralıktaki değerleri tutacak şekilde başlatır.

__13.__ _reserve_ işlevi. Eğer _new_cap_ değeri var olan kapasiteden büyükse kapasiteyi arttırır. Eğer _new_cap_ değeri var olan kapasiteden küçükse kapasiteyi küçültmez.

__14.__ Kapasite değerini _Vector_'de tutulan öğe sayısına _(size)_ büzer (kapasiteyi küçültür). 

__15.__ _Vector_'de tutulan ilk öğenin konumunu döndürür. İşlevin geri dönüş değeri içsel bir tür olan _iterator_ türüdür. Boş bir _Vector_'de bu konumun içerik _(dereferencing)_ operatörünün operandı yapılması tanımsız davranıştır.

__16.__ _Vector_'de tutulan son öğeden sonraki _(olmayan öğenin)_ konumunu döndürür. İşlevin geri dönüş değeri içsel bir tür olan _iterator_ türüdür. Bu işlevden alınan konum karşılaştırma operatörleri ile diğer konumlarla karşılaştırılabilir. Bu konumun içerik _(dereferencing)_ operatörünün operandı yapılması tanımsız davranıştır.

__42.__ _front_ işlevi _Vector_'de tutulan ilk öğeyi döndürür. _Vector_'ün boş olması durumunda bu işlevin çağrılması tanımsız davranıştır.

__43.__ _front_ işlevi _Vector_'de tutulan ilk öğeye _const_ referans döndürür _(const overloading)_. _Vector_'ün boş olması durumunda bu işlevin çağrılması tanımsız davranıştır.

__44.__ _back_ işlevi _Vector_'de tutulan son öğeyi döndürür. _Vector_'ün boş olması durumunda bu işlevin çağrılması tanımsız davranıştır.

__45.__ _back_ işlevi _Vector_'de tutulan ilk öğeye _const_ referans döndürür _(const overloading)_. _Vector_'ün boş olması durumunda bu işlevin çağrılması tanımsız davranıştır.

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
	explicit Vector(size_t size, int val = 0);  //9
	Vector(std::initializer_list<int> ilist);   //10
	Vector(const int *pbegin, const int *pend);  //11
        Vector(const_iterator, const_iterator);     //12

	//--------------------------------------------------

	void reserve(size_t new_cap);  //13
	void shrink_to_fit(); //14

	iterator begin(); //15
	iterator end(); //16
	const_iterator begin()const; //17
	const_iterator end()const;  //18

	
	//setters/mutators
	Vector& operator=(std::initializer_list<int> ilist); //22
	void resize(size_t, int val = 0);  //23
	
	void assign(size_t n, int val);  //26
	void assign(std::initializer_list<int> ilist); //27
	void assign(const int* pbeg, const int* pend);  //28

        iterator& insert(iterator where, int val); //30
        iterator& insert(iterator where, iterator source_beg, iterator source_end); //31

        iterator& erase(iterator where); //34
	iterator& erase(iterator beg, iterator end); //55

	void swap(Vector &other); //38
	void clear(); //39

	int &front();  //42
	const int &front()const; //43
	int &back();  //44
	const int &back()const; //44
	int& operator[](size_t idx); //45
	const int& operator[](size_t idx)const; //45

	//--------------------------------------------------

	int* data(); //50
	const int* data()const; //51

	size_t capacity()const; //52
	size_t size()const;  //53
	bool empty()const; //54
	

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
