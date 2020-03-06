# Fraction sınıfı

Aşağıda ismi `Fraction` olan bir sınıfın tanımlandığı başlık dosyası yer almaktadır. 
Bu ödevde `Fraction` sınıfının kodlarını yazmanız isteniyor.
`Fraction` sınıfı türünden bir nesnenin değeri bir rasyonel sayı (kesirdir) . Örnek: `3 / 5` <br>
`Fraction` sınıfı türünden bir nesne rasyonel sayıyı en sade haliyle tutar. Örneğin bir rasyonel sayının değeri `(12 / 36)' olamaz. Değer `(1 / 3)` olarak tutulmalıdır.<br>
Aşağıdaki açıklamalar kodda bulunan yorum satırlarına ilişkindir:

1. Pay `(numerator)` ve payda `(denominator)` isteyen kurucu işlev.
2. Kurucu işlev. Oluşturulan rasyonel sayının değeri argüman olarak alınan `double` değere yakın olmalı.
3. `random_date` işlevinin üreteceği tarih için en büyük yıl değeri
4. Toplama işlemli atama operatör fonksiyonu. (üye operatör fonksiyonu olmalı)
5. Çıkartma işlemli atama operatör fonksiyonu. (üye operatör fonksiyonu olmalı)
6. Çarpma işlemli atama operatör fonksiyonu. (üye operatör fonksiyonu olmalı)
7. Bölme işlemli atama operatör fonksiyonu. (üye operatör fonksiyonu olmalı)
8. `Date` nesnesini `"calender time"` değerinden dönüştüreceği tarih değeri ile oluşturacak.
9. Ayın gününü döndürüyor.
10. Ay değerini döndürüyor. `(Ocak 1, Şubat 2, ...)`
11. Tarihin yıl değerini döndürüyor
12. pay '(numerator)' değerini döndüren const üye işlev.
13. payda '(denominator)' değerini döndüren const üye işlev.
14. Tarihin ayın günü değerini değiştiriyor.
15. Tarihin ayını değiştiriyor
16. Tarihin yılını değiştiriyor.
17. Tarihi değiştiriyor.
18. İki rasyonel sayıyı toplayan operatör fonksiyonu. Dilerseniz üye fonksiyon olarak yazabilirsiniz.
19. İki rasyonel sayıyı birbirinden çıkartan operatör fonksiyonu. Dilerseniz üye fonksiyon olarak yazabilirsiniz.
20. İki rasyonel sayıyı çarpan  operatör fonksiyonu. Dilerseniz üye fonksiyon olarak yazabilirsiniz.
21. İki rasyonel sayıyı birbirine bölen operatör fonksiyonu. Dilerseniz üye fonksiyon olarak yazabilirsiniz.
22. Sonek `++` operatörünü yükleyen işlev. (İşlevin referans döndürmediğine dikkat ediniz). 
23. Önek `--` operatörünü yükleyen işlev. (İşlevin referans döndürdüğüne dikkat ediniz). 
24. Sonek `--` operatörünü yükleyen işlev. (İşlevin referans döndürmediğine dikkat ediniz). 
25. Rastgele bir tarih döndüren sınıfın `static` üye işlevi.
26. Artık yıl testi yapan sınıfın `static` üye işlevi.
27. `Date` nesnelerinin karşılaştırılmasını sağlayacak global operatör işlevleri
28. İki tarih arasındaki gün farkını döndüren global operatör işlevi
29. Gelen tarihten `n` gün sonrasını döndüren global operatör işlevleri
30. İçsel `(nested) enum class Weekday` için arttırma ve eksiltme işlevleri
31. Date nesnelerinin değerlerini çıkış akımlarına yazdıracak global operatör işlevi `(inserter)`
Formatlama şöyle olmalı:  `31 Ekim 2019 Persembe`
32. `Date` nesnelerine giriş akımlarından aldığı karakterlerden oluşturulacak değeri yerleştiren global operatör işlevi `(extractor)`
Formatlama: `gg/aa/yyyy` (ayıraç olarak istenilen bir karakter kullanılabilir.


### Diğer notlar:
* Dilediğiniz global işlevleri `"friend"` yapabilirsiniz.
* Sınıfın `private` arayüzünü dilediğiniz gibi oluşturabilirsiniz.
* Gerekli görürseniz sınıfın `public` arayüzüne eklemeler yapabilirsiniz.
* Gerekli görürseniz sınıfın `public` arayüzünde değişiklikler yapabilirsiniz.
* Sınıfın `public` öğelerinin isimlerini istediğiniz şekilde değiştirebilirsiniz.
* Dilediğiniz işlevleri `"constexpr"` yapabilirsiniz. 
* Dilediğiniz işlevleri `"constexpr"` olmaktan çıkartabilirsiniz.
* Bu ödevde `"exception handling"` araçlarını kullanmayacağız. (`exception handling` konusunu gördükten sonra kodlarda değişiklik yapacağız.)
* Kod tekrarından mümkün olduğu kadar kaçınmalısınız.
* `const` doğruluğuna `(const correctness)` çok dikkat etmelisiniz. `(const olması gereken tüm varlıklar const olmalı)`
* Gereksiz yorum satırlarından mümkün olduğu kadar kaçınmalısınız.
* Yazdığınız kodların doğru çalışıp çalışmadığını sınamak için test kodları yazmalısınız.
* Derleyicinizin uygun bir `switch`'ini kullanarak mantıksal uyarı iletilerinin hata `(error)` olarak değerlendirilmesini sağlayınız.


```
#include <string>
#include <iosfwd>

class Fraction {
public:
	constexpr explicit Fraction(int num = 0, int denum = 1); //1
	constexpr explicit Fraction(double dval); // 2
	explicit Fraction(const std::string &s);  //3
	
	Fraction& operator+=(const Fraction& f); //4
	Fraction& operator-=(const Fraction& f); //5
	Fraction& operator*=(const Fraction& f); //6
	Fraction& operator/=(const Fraction& f); //7
	
	Fraction& operator++(); //8
	Fraction operator++(int); //9
	Fraction& operator--(); //10
	Fraction operator--(int);  //11
	
	constexpr int Num()const;  //12
	constexpr int Denom()const; //13
	operator bool()const;  //14
	double to_double()const; //15
	std::string to_string()const; //16
	
	static Fraction Random();  //17
};

constexpr Fraction operator+(const Fraction& f1, const Fraction &f2); //18
constexpr Fraction operator-(const Fraction& f1, const Fraction &f2);  //19
constexpr Fraction operator*(const Fraction& f1, const Fraction &f2); //20
constexpr Fraction operator/(const Fraction& f1, const Fraction &f2);  //21

bool operator==(const Fraction& f1, const Fraction& f2); //22
bool operator!=(const Fraction& f1, const Fraction& f2); //23
bool operator<(const Fraction& f1, const Fraction& f2);   //24
bool operator<=(const Fraction& f1, const Fraction& f2);   //25
bool operator>(const Fraction& f1, const Fraction& f2);  //26
bool operator>=(const Fraction& f1, const Fraction& f2);  //27

std::ostream &operator<<(std::ostream&, const Fraction &); //28
std::istream &operator>>(std::istream&, Fraction &);  //29


```
