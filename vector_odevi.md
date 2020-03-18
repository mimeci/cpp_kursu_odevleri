# Vector sınıfı

Aşağıda ismi _Vector_ olan bir sınıfın tanımlandığı başlık dosyası yer almaktadır. 
Bu ödevde _Vector_ sınıfının kodlarını yazmanız isteniyor.
+ _Vector_ sınıfı türünden bir nesne bir dinamik diziyi _(dynamic array)_ temsil etmektedir. Bu ödevi yapabilmek için dinamik dizi veri yapısı hakkında temel bilgilere sahip olmalısınız.


### Aşağıdaki açıklamalar kodda bulunan yorum satırlarına ilişkindir:
__1.__ İçsel _(nested)_ _iterator_ türü. Kaptaki öğelerin konumlarını tutan _iterator_ nesnelerinin türü. Okuma ve yazma erişimi sağlar.<br>

__2.__ İçsel _(nested)_ _const\_iterator_ türü. Kaptaki öğelerin konumlarını tutan _const\_iterator_ nesnelerinin türü. Yalnızca okuma amaçlı erişim sağlar.<br>

__3.__ Varsayılan kurucu işlev _(default constructor)_. Boş bir _Vector_ oluşturur.<br>

__4.__ Sonlandırıcı işlev _(destructor)_. Kaynakları geri verir.<br>

__5.__ Kopyalayan kurucu işlev. _(copy constructor)_ <br>

__6.__ Taşıyan kurucu işlev. _(move constructor)_ <br>

__7.__ Kopyalayan atama işlevi. _(copy assignment)_<br>

__8.__ Taşıyan atama işlevi. _(move assignment)_<br>

__9.__ Kurucu işlev. _Vector_'ü değeri _val_ olan _size_ tane öğe ile başlatır.<br>

__10.__ _std::initializer_list_ parametreli kurucu işlev. _Vector_ nesnesini listedeki değerleri tutacak şekilde başlatır. <br>

__11.__ Aralık _(range)_ parametreli kurucu işlev. _Vector_ nesnesini bu aralıktaki değerleri tutacak şekilde başlatır. <br>

__12.__ Aralık _(range)_ parametreli kurucu işlev. _Vector_ nesnesini bu aralıktaki değerleri tutacak şekilde başlatır.<br>

__13.__ _reserve_ işlevi. Eğer _new_cap_ değeri var olan kapasiteden büyükse kapasiteyi arttırır. Eğer _new_cap_ değeri var olan kapasiteden küçükse kapasiteyi küçültmez.<br>

__14.__ Kapasite değerini _Vector_'de tutulan öğe sayısına _(size)_ büzer (kapasiteyi küçültür). <br>

__15.__ _Vector_'de tutulan ilk öğenin konumunu döndürür. İşlevin geri dönüş değeri içsel bir tür olan _iterator_ türüdür. Boş bir _Vector_'de bu konumun içerik _(dereferencing)_ operatörünün terimi yapılması tanımsız davranıştır.<br>

__16.__ _Vector_'de tutulan son öğeden sonraki _(olmayan öğenin)_ konumunu döndürür. İşlevin geri dönüş değeri içsel bir tür olan _iterator_ türüdür. Bu işlevden alınan konum karşılaştırma operatörleri ile diğer konumlarla karşılaştırılabilir. Bu konumun içerik _(dereferencing)_ operatörünün terimi yapılması tanımsız davranıştır.<br>

__17.__ _Vector_'de tutulan ilk öğenin konumunu _(salt okuma erişimli)_ döndürür. İşlevin geri dönüş değeri içsel bir tür olan _const\_iterator_ türüdür. Boş bir _Vector_'de bu konumun içerik _(dereferencing)_ operatörünün terimi yapılması tanımsız davranıştır.<br>

__16.__ _Vector_'de tutulan son öğeden sonraki _(olmayan öğenin)_ konumunu döndürür. İşlevin geri dönüş değeri içsel bir tür olan _const\_iterator_ türüdür. Bu işlevden alınan konum karşılaştırma operatörleri ile diğer konumlarla karşılaştırılabilir. Bu konumun içerik _(dereferencing)_ operatörünün terimi yapılması tanımsız davranıştır.<br>



__22.__ _initializer_list_ parametreli atama işlevi. Bu işlevin çağrılması ile _Vector_ artık parametre olan listedeki değerleri tutacaktır. </br>

__23.__ _resize_ işlevi. _Vector_'de turulan öğe sayısını değiştirir. Bu işlev _Vector_'deki öğe sayısını hem arttırmak hem de azaltmak için kullanlabilir. İşlevin varsayılan argüman alan ikinci parametresi _Vector_'deki öğe sayısının arttırılması durumunda yeni eklenecek öğelerin alacakları değerdir. </br>

__26.__ _assign_ işlevi. Bu işlevin çağrılmasıyla _Vector_ nesnesi _n_ tane _val_ değeri tutar hale gelir. _(fill assign)_ </br>

__27.__ _initializer_list_ parametreli _assign_ işlevi. Bu işlevin çağrılması ile _Vector_ artık parametre olan listedeki değerleri tutacaktır. </br>

__28.__ aralık _(range)__ parametreli assign işlevi. Bu işlevin çağrılması ile _Vector_ artık parametresine gelen aralıktaki değerleri tutacaktır. </br>

__30.__ _where_ konumuna _val_ değerini ekler. İşlevin geri dönüş değeri eklenmiş öğenin konumudur.</br>

__31.__ _where_ konumuna _\[beg end)_ aralığındaki değerleri ekler. İşlevin geri dönüş değeri ilk eklenmiş öğenin konumudur. </br>


__34.__ _where_ konumundaki öğeyi siler. İşlevin geri dönüş değeri silinmiş öğeden sonraki öğenin konumudur</br>

__35.__ _\[beg end)_ aralığındaki değerleri siler. İşlevin geri dönüş değeri silinen öğelerden sonraki öğenin konumudur.</br>

__38__. _swap_ işlevi iki _Vector_'ü takas eder. İşlev yalnızca sınıfın veri öğelerini takas etmelidir. Dinamik bellek alanında yer alan _Vector_'ün tuttuğu öğeler takas edilmemelidir.</br>

__39__. _clear_ işlevi iki _Vector_'deki tüm öğeleri siler yani _Vector_'ü boşaltır. Bu işlemden sonra _Vector_'ün _size_ değeri _0_ olmalıdır.</br>


__42.__ _front_ işlevi _Vector_'de tutulan ilk öğeyi döndürür. _Vector_'ün boş olması durumunda bu işlevin çağrılması tanımsız davranıştır.<br>

__43.__ _front_ işlevi _Vector_'de tutulan ilk öğeye _const_ referans döndürür _(const overloading)_. _Vector_'ün boş olması durumunda bu işlevin çağrılması tanımsız davranıştır.<br>

__44.__ _back_ işlevi _Vector_'de tutulan son öğeyi döndürür. _Vector_'ün boş olması durumunda bu işlevin çağrılması tanımsız davranıştır.<br>

__45.__ _back_ işlevi _Vector_'de tutulan ilk öğeye _const_ referans döndürür _(const overloading)_. _Vector_'ün boş olması durumunda bu işlevin çağrılması tanımsız davranıştır.<br>

__50.__ _data_ işlevi _Vector_'de tutulan ilk öğenin adresini döndürür. Bu adres _C api'lerine_ bir dizi adresi olarak gönderilebilir. <br>

__51.__ _data_ işlevi _Vector_'de tutulan ilk öğenin adresini _(salt okuma erişimli)_ döndürür. Bu adres _C api'lerine_ bir dizi adresi olarak gönderilebilir. <br>

__52.__ _capacity_ işlevi _Vector_'ün kapasite değerini döndürür. Kapasite değeri _Vector_ nesnesinin edindiği ve tutmakta olduğu dinamik bellek bloğunun öğe sayısı cinsinden büyüklüğüdür.</br>

__53.__ _size_ işlevi _Vector_'ün _size_ değerini döndürür. _size_ değeri _Vector_ nesnesinin tutmakta olduğu öğe sayısıdır. </br>

__54.__ _empty_ işlevi _Vector_'ünboş olup olmadığını sınar. </br>


### Diğer notlar:
* Dilediğiniz global işlevleri _"friend"_ yapabilirsiniz.
* Sınıfın _private_ arayüzünü dilediğiniz gibi oluşturabilirsiniz.
* Gerekli görürseniz sınıfın _public_ arayüzüne eklemeler yapabilirsiniz.
* Gerekli görürseniz sınıfın _public_ arayüzünde değişiklikler yapabilirsiniz.
* Sınıfın _public_ öğelerinin isimlerini istediğiniz şekilde değiştirebilirsiniz. Ödevde seçilen isimler C++ standart kütüphanesinin 
tercih ettiği isimlerdir.
* Dilediğiniz işlevleri _"constexpr"_ yapabilirsiniz.
* Bu ödevde _exception handling_ araçlarını kullanabilirsiniz. 
* Kod tekrarından mümkün olduğu kadar kaçınmalısınız.
* _const_ doğruluğuna _(const correctness)_ çok dikkat etmelisiniz. _(const olması gereken tüm varlıklar const olmalı)_
* Gereksiz yorum satırlarından mümkün olduğu kadar kaçınmalısınız.
* Yazdığınız kodların doğru çalışıp çalışmadığını sınamak için test kodları yazmalısınız.
* Derleyicinizin uygun bir `switch`'ini kullanarak mantıksal uyarı iletilerinin hata `(error)` olarak değerlendirilmesini sağlayınız.




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
