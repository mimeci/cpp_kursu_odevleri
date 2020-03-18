# Vector sınıfı

Aşağıda ismi _Vector_ olan bir sınıfın tanımlandığı başlık dosyası yer almaktadır. 
Bu ödevde _Vector_ sınıfının kodlarını yazmanız isteniyor.
+ _Vector_ sınıfı türünden bir nesne bir dinamik diziyi _(dynamic array)_ temsil etmektedir. Bu ödevi yapabilmek için dinamik dizi veri yapısı hakkında temel bilgilere sahip olmalısınız.


### Aşağıdaki açıklamalar kodda bulunan yorum satırlarına ilişkindir:
__1.__ İçsel _(nested)_ _iterator_ türü. Kaptaki öğelerin konumlarını tutan _iterator_ nesnelerinin türü. Okuma ve yazma erişimi sağlar.<br>

__2.__ İçsel _(nested)_ _const\_iterator_ türü. Kaptaki öğelerin konumlarını tutan _const\_iterator_ nesnelerinin türü. Yalnızca okuma amaçlı erişim sağlar.<br>

__3.__ Varsayılan kurucu işlev _(default constructor)_. Boş bir _Vector_ nesnesi oluşturmalı.<br>

__4.__ Sonlandırıcı işlev _(destructor)_. Kaynakları geri vermeli.<br>

__5.__ Kopyalayan kurucu işlev. _(copy constructor)_ <br>

__6.__ Taşıyan kurucu işlev. _(move constructor)_ <br>

__7.__ Kopyalayan atama işlevi. _(copy assignment)_<br>

__8.__ Taşıyan atama işlevi. _(move assignment)_<br>

__9.__ Kurucu işlev. _Vector_'ü değeri _val_ olan _size_ tane öğe ile başlatmalı _(fill constructor)_.<br>

__10.__ _std::initializer_list_ parametreli kurucu işlev. _Vector_ nesnesini listedeki değerleri tutacak şekilde başlatır. <br>

__11.__ Aralık _(range)_ parametreli kurucu işlev. _Vector_ nesnesini _\[pbegin, pend)_ aralığındaki değerlerle başlatır. Aralık olarak doğrudan adresler _(pointer)_ kullanılmaktadır. <br>

__12.__ Aralık _(range)_ parametreli kurucu işlev. _Vector_ nesnesini _\[beg, end)_ aralığındaki değerlerle başlatır. Aralık olarak _const\_iterator_  değerleri kullanılmaktadır. <br>

__13.__ _reserve_ işlevi. Eğer _new_cap_ değeri var olan kapasiteden büyükse kapasiteyi arttırmalı. Eğer _new_cap_ değeri var olan kapasiteden küçükse kapasiteyi küçültmemeli.<br>

__14.__ Kapasite değerini _Vector_'de tutulan öğe sayısına _(size)_ büzmeli (kapasiteyi küçültmeli). <br>

__15.__ _Vector_'de tutulan ilk öğenin konumunu döndürmeli.
İşlevin geri dönüş değeri içsel bir tür olan _iterator_ türüdür.
Boş bir _Vector_'de bu konumun içerik _(dereferencing)_ operatörünün terimi yapılması tanımsız davranıştır.<br>

__16.__ _Vector_'de tutulan son öğeden sonraki _(olmayan öğenin)_ konumunu döndürmeli.
İşlevin geri dönüş değeri içsel bir tür olan _iterator_ türüdür.
Bu işlevden alınan konum karşılaştırma operatörleri ile diğer konumlarla karşılaştırılabilir.
Bu konumun içerik _(dereferencing)_ operatörünün terimi yapılması tanımsız davranıştır.<br>

__17.__ _Vector_'de tutulan ilk öğenin konumunu _(salt okuma erişimli)_ döndürmeli.
İşlevin geri dönüş değeri içsel bir tür olan _const\_iterator_ türüdür.
Boş bir _Vector_'de bu konumun içerik _(dereferencing)_ operatörünün terimi yapılması tanımsız davranıştır.<br>

__16.__ _Vector_'de tutulan son öğeden sonraki _(olmayan öğenin)_ konumunu döndürmeli.
İşlevin geri dönüş değeri içsel bir tür olan _const\_iterator_ türüdür. Bu işlevden alınan konum karşılaştırma operatörleri ile diğer konumlarla karşılaştırılabilir. Bu konumun içerik _(dereferencing)_ operatörünün terimi yapılması tanımsız davranıştır.<br>

__22.__ _initializer_list_ parametreli atama işlevi. 
Bu işlevin çağrılması ile _Vector_ artık parametre olan listedeki değerleri tutmalı. </br>

__23.__ _resize_ işlevi. 
_Vector_'de tutulan öğe sayısını değiştirmeli. 
Bu işlev _Vector_'deki öğe sayısını hem arttırmak hem de azaltmak için kullanılabilir. 
İşlevin varsayılan argüman alan ikinci parametresi _Vector_'deki öğe sayısının arttırılması durumunda yeni eklenecek öğelerin alacakları değerdir. 
_Vector_'deki öğe sayısından daha küçük bir değerle çağrılırsa sondan silme işlemi yapmalı.</br>

__26.__ _assign_ işlevi. 
Bu işlevin çağrılmasıyla _Vector_ nesnesi _n_ tane _val_ değeri tutar hale gelmeli. _(fill assign)_ </br>

__27.__ _initializer_list_ parametreli _assign_ işlevi. 
Bu işlevin çağrılması ile _Vector_ artık parametresine gelen listedeki değerleri tutmalı. </br>

__28.__ aralık _(range)__ parametreli assign işlevi. 
Bu işlevin çağrılması ile _Vector_ artık parametresine gelen aralıktaki değerleri tutmalı. </br>

__30.__ _where_ konumuna _val_ değerini eklemeli.
İşlevin geri dönüş değeri eklenmiş öğenin konumu olmalı.</br>

__31.__ _where_ konumuna _\[beg end)_ aralığındaki değerleri eklemeli.
İşlevin geri dönüş değeri ilk eklenmiş öğenin konumu olmalı. </br>


__34.__ _where_ konumundaki öğeyi silmeli.
İşlevin geri dönüş değeri silinmiş öğeden sonraki öğenin konumu olmalı</br>

__35.__ _\[beg end)_ aralığındaki değerleri silmeli.
İşlevin geri dönüş değeri silinen öğelerden sonraki öğenin konumu olmalı.</br>

__36.__ _push\_back_ işlevi.
Parametresine gelen değeri _Vector_'e son öğe olarak eklemeli. </br>

__37.__ _pop\_back_ işlevi. 
_Vector_'deki son öğeyi silmeli. </br>

__38__. _swap_ işlevi iki _Vector_'ü takas etmeli. 
İşlev yalnızca sınıfın veri öğelerini takas etmeli. 
Dinamik bellek alanında yer alan _Vector_'ün tuttuğu öğeler takas edilmemelidir.</br>

__39__. _clear_ işlevi iki _Vector_'deki tüm öğeleri silmeli yani _Vector_'ü boşaltmalı. 
Bu işlemden sonra _Vector_'ün _size_ değeri _0_ olmalı.</br>


__42.__ _front_ işlevi _Vector_'de tutulan ilk öğeyi döndürmeli. 
_Vector_'ün boş olması durumunda bu işlevin çağrılması tanımsız davranıştır.<br>

__43.__ _front_ işlevi _Vector_'de tutulan ilk öğeye _const_ referans döndürmeli _(const overloading)_. 
_Vector_'ün boş olması durumunda bu işlevin çağrılması tanımsız davranıştır.<br>

__44.__ _back_ işlevi _Vector_'de tutulan son öğeyi döndürmeli. 
_Vector_'ün boş olması durumunda bu işlevin çağrılması tanımsız davranıştır.<br>

__45.__ _back_ işlevi _Vector_'de tutulan ilk öğeye _const_ referans döndürmeli _(const overloading)_. 
_Vector_'ün boş olması durumunda bu işlevin çağrılması tanımsız davranıştır.<br>

__50.__ _data_ işlevi _Vector_'de tutulan ilk öğenin adresini döndürmeli. 
Bu adres _C_ işlevlerine bir dizi adresi olarak gönderilebilir. <br>

__51.__ _data_ işlevi _Vector_'de tutulan ilk öğenin adresini _(salt okuma erişimli)_ döndürür. Bu adres _C api'lerine_ bir dizi adresi olarak gönderilebilir. <br>

__52.__ _capacity_ işlevi _Vector_'ün kapasite değerini döndürmeli. 
Kapasite değeri _Vector_ nesnesinin edindiği ve tutmakta olduğu dinamik bellek bloğunun öğe sayısı cinsinden büyüklüğüdür.</br>

__53.__ _size_ işlevi _Vector_'ün _size_ değerini döndürmeli. 
_size_ değeri _Vector_ nesnesinin tutmakta olduğu öğe sayısıdır. </br>

__54.__ _empty_ işlevi _Vector_'ün boş olup olmadığını sınamalı. </br>

### Vector::iterator sınıfı

__60.__   Ön ek _++_ operatörü. _iterator_ nesnesini _1_ arttırarak bir sonraki öğenin konumunu tutmasını sağlamalı.<br>

__61.__   Son ek _++_ operatörü. _iterator_ nesnesini _1_ arttırarak bir sonraki öğenin konumunu tutmasını sağlamalı.<br>

__62.__   Ön ek _--_ operatörü. _iterator_ nesnesini _1_ eksilterek bir önceki öğenin konumunu tutmasını sağlamalı.<br>

__63.__   Son ek _--_ operatörü. _iterator_ nesnesini _1_ eksilterek bir önceki öğenin konumunu tutmasını sağlamalı.<br>

__64.__   İçerik operatörü. 
_iterator_ nesnesinin tuttuğu konumdaki öğeye eriştirmeli.<br>
__65.__   İndeks operatörü. _iterator_ nesnesinin tuttuğu konumdaki öğeden _n_ sonraki ya da önceki öğeye eriştirmeli.<br>
__66.__   İki _iterator_ arasındaki farkı döndürmeli.<br>
__67.__   _iterator_ konumundan _n_ sonraki konumu döndürmeli.<br>
__68.__   _iterator_ konumundan _n_ sonraki konumu döndürmeli.<br>

__69.__ _iterator_ nesnesini _n_ sonraki nesnenin konumunu tutacak şekilde arttırmalı. </br>

__70.__ _iterator_ nesnesini _n_ önceki nesnenin konumunu tutacak şekilde eksiltmeli. </br>

__71.__   _iterator_ nesnelerinin karşılaştırılmalarını sağlayan karşılaştıma operatör işlevleri. <br>		

### Vector::const_iterator sınıfı

__80.__   Ön ek _++_ operatörü. _const\_iterator_ nesnesini _1_ arttırarak bir sonraki öğenin konumunu tutmasını sağlar.<br>

__81.__   Son ek _++_ operatörü. _const\_iterator_ nesnesini _1_ arttırarak bir sonraki öğenin konumunu tutmasını sağlar.<br>

__82.__   Ön ek _--_ operatörü. _const\_iterator_ nesnesini _1_ eksilterek bir önceki öğenin konumunu tutmasını sağlar.<br>

__83.__   Son ek _--_ operatörü. _const\_iterator_ nesnesini _1_ eksilterek bir önceki öğenin konumunu tutmasını sağlar.<br>

__84.__   İçerik operatörü. _const\_iterator_ nesnesinin tuttuğu konumdaki öğeye okuma amaçlı erişim sağlar.<br>
__85.__   İndeks operatörü. _const\_iterator_ nesnesinin tuttuğu konumdaki öğeden _n_ sonraki ya da önceki öğeye okuma amaçlı erişim sağlar.<br>
__86.__   İki _const\_iterator_ arasındaki farkı döndürür.<br>
__87.__   _const\_iterator_ konumundan _n_ sonraki konumu döndürür.<br>
__88.__   _const\_iterator_ konumundan _n_ sonraki konumu döndürür.<br>

__89.__ _const\_iterator_ nesnesini _n_ sonraki nesnenin konumunu tutacak şekilde arttırır. </br>

__80.__ _const\_iterator_ nesnesini _n_ önceki nesnenin konumunu tutacak şekilde eksiltir. </br>

__81.__   _const\_iterator_ nesnelerinin karşılaştırılmalarını sağlayan karşılaştıma operatör işlevleri. <br>		




### Diğer notlar:
* Dilediğiniz global işlevleri _"friend"_ yapabilirsiniz.
* Sınıfın _private_ arayüzünü dilediğiniz gibi oluşturabilirsiniz.
* Gerekli görürseniz sınıfın _public_ arayüzüne eklemeler yapabilirsiniz.
* Gerekli görürseniz sınıfın _public_ arayüzünde değişiklikler yapabilirsiniz.
* Sınıfın _public_ öğelerinin isimlerini istediğiniz şekilde değiştirebilirsiniz. Ödevde seçilen isimler _C++_ standart kütüphanesinin 
tercih ettiği isimlerdir.
* Dilediğiniz işlevleri _"constexpr"_ yapabilirsiniz.
* Bu ödevde _exception handling_ araçlarını kullanabilirsiniz. 
* Kod tekrarından mümkün olduğu kadar kaçınmalısınız.
* _const_ doğruluğuna _(const correctness)_ çok dikkat etmelisiniz. _(const olması gereken tüm varlıklar const olmalı)_
* Gereksiz yorum satırlarından mümkün olduğu kadar kaçınmalısınız.
* Yazdığınız kodların doğru çalışıp çalışmadığını sınamak için test kodları yazmalısınız.
* Derleyicinizin uygun bir _switch_'ini kullanarak mantıksal uyarı iletilerinin hata _(error)_ olarak değerlendirilmesini sağlayınız.


## _Vector_ sınıfının tanımı

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
        Vector(const_iterator beg, const_iterator end);     //12

	//--------------------------------------------------

	void reserve(size_t new_cap);  //13
	void shrink_to_fit(); //14

	iterator begin(); //15
	iterator end(); //16
	const_iterator begin()const; //17
	const_iterator end()const;  //18

	
	//setters/mutators
	Vector& operator=(std::initializer_list<int> ilist); //22
	void resize(std::size_t, int val = 0);  //23
	
	void assign(std::size_t n, int val);  //26
	void assign(std::initializer_list<int> ilist); //27
	void assign(const int* pbeg, const int* pend);  //28

        iterator& insert(iterator where, int val); //30
        iterator& insert(iterator where, iterator source_beg, iterator source_end); //31

        iterator& erase(iterator where); //34
	iterator& erase(iterator beg, iterator end); //35
	void push_back(int val); //36
	void pop_pack(); //37

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
		iterator& operator++();  //60
		iterator operator++(int); //61
		iterator& operator--();  //62
		iterator operator--(int); //63
		int& operator*(); //64
		int &operator[](int n);  //65
		std::ptrdiff_t operator-(iterator); //66
		iterator operator+(int n); //67
		iterator operator-(int n); //68
		iterator& operator+=(int n)  //69
                iterator& operator-=(int n) //70
		bool operator<(iterator)const; //71
		bool operator<=(iterator)const; //71
		bool operator>(iterator)const; //71
		bool operator>=(iterator)const; //71
		bool operator==(iterator)const; //71
		bool operator!=(iterator)const; //71
	};

	class const_iterator {
		//...
	public:
		public:
		iterator& operator++();  //80
		iterator operator++(int); //81
		iterator& operator--();  //82
		iterator operator--(int); //83
		int& operator*(); //84
		int &operator[](int n);  //85
		ptrdiff_t operator-(iterator); //86
		const_iterator operator+(int n); //87
		const_iterator operator-(int n); //88
		const_iterator& operator+=(int n)  //89
                const_iterator& operator-=(int n) //90
		bool operator<(const_iterator)const; //91
		bool operator<=(const_iterator)const; //91
		bool operator>(const_iterator)const; //91
		bool operator>=(const_iterator)const; //91
		bool operator==(const_iterator)const; //91
		bool operator!=(const_iterator)const; //91
	};
	};
};
	
};
```
