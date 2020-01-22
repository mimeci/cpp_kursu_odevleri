#### Aşağıdaki test kodunda belirtilen yere (ayrı ayrı) şu işleri gerçekleştirecek kodları yazınız. Gereken yerlerde lamba ifadelerini kullanınız:

1) vector'de tutulan ilk öğeyi silin.
2) vector'de tutulan son öğeyi silin.
3) vector'de tutulan 15. öğeyi silin.
4) ilk ve son öğe haricindeki tüm öğeleri silin
5) değeri 5 olan ilk öğeyi (varsa) silin
6) değeri 5 olan son öğeyi (varsa) silin
7) değeri 5 olan tüm öğeleri (varsa) silin
8) standart giriş akımından alınacak değerdeki tüm öğeleri silin
9) standart giriş akımından alınacak indeksteki öğeyi silin
10) 
11) tüm çift sayıları silin
12) indeksi 3'e tam bölünen öğeleri silin
13) ardışık aynı değerde olan öğelerin sayısını teke indirin.
14) vector'de aynı değerden birden fazla olmayacak şekilde silme işlemi yapın. Silme işleminden sonra her değer "unique" olmalı.




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
	std::cout << "\n\n\n";
	copy(ivec.begin(), ivec.end(), ostream_iterator<int>{cout, " "});
}
```
