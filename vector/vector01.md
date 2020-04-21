#### Aşağıdaki test kodunda belirtilen yere (ayrı ayrı) şu işleri gerçekleştirecek kodları yazınız. Gereken yerlerde lambda ifadelerini kullanınız:

1) _vector_'de tutulan ilk öğeyi silin.
2) _vector_'de tutulan son öğeyi silin.
3) _vector_'de tutulan _15._ öğeyi silin.
4) İlk ve son öğe haricindeki tüm öğeleri (varsa) silin.
5) Değeri _5_ olan ilk öğeyi (varsa) silin.
6) Değeri _5_ olan son öğeyi (varsa) silin.
7) Değeri _5_ olan tüm öğeleri (varsa) silin.
8) Standart giriş akımından alınacak değerdeki tüm öğeleri (varsa) silin
9) Standart giriş akımından alınacak indeksteki öğeyi silin
10) Standart giriş akımından alınacak aralıktaki tüm öğeleri (varsa) silin. Örnek *[3 - 7]* aralığı.
11) Tüm çift sayıları (varsa) silin.
12) İndeksi _3_'e tam bölünen öğeleri silin.
13) Ardışık aynı değerde olan öğelerin sayısını teke indirin.
14) Ardışık çift sayılardan birincisi haricindeki geri kalanları, ardışık tek sayılardan birincisi haricindeki geri kalanları silin.
Silme işleminden sonra yanyana iki tek sayı ya da iki çift sayı bulunmamalı.
15) _vector_'de aynı değerden birden fazla olmayacak şekilde silme işlemi yapın. Silme işleminden sonra her değer _"unique"_ olmalı.


```
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <iterator>


int main()
{
	using namespace std;
	vector<int> ivec(100);
	srand(static_cast<unsigned>(time(nullptr)));
	generate(ivec.begin(), ivec.end(), [] {return rand() % 20; });
	copy(ivec.begin(), ivec.end(), ostream_iterator<int>{cout, " "});
	//.....
	// kodunuz
	cout << "\n\n\n";
	copy(ivec.begin(), ivec.end(), ostream_iterator<int>{cout, " "});
}
```
