#### Aşağıdaki test kodunda belirtilen yere (ayrı ayrı) _ivec_ nesnesi üstünde şu işleri gerçekleştirecek kodları yazınız. Gereken yerlerde lambda ifadelerini kullanınız:

1) Sona _127_ değerini ekleyin
2) Başa _253_ değerini ekleyin.
3) Sondan bir önceki değer olacak şekilde _666_ değerini ekleyin.
4) İkinci değer olacak şekilde _444_ değerini ekleyin
5) Standart giriş akımından _2_ tam sayı alın. Örnek _5_ ve _9_. Başa _5_ tane _9_ ekleyin.
6) Standart giriş akımından _2_ tam sayı alın. Örnek _5_ ve _9_. Sona _5_ tane _9_ ekleyin.
7) standart giriş akımından 2 tamsayı alın. Örnek 5 ve 9. 9 değeri 5 indeksli öğe olacak şekilde 9 değerini ekleyin.
8) Her öğeden onun yanına bir tane daha ekleyin. Bu işlemden sonra `ivec`'in boyutu 2 katına çıkmalı
9) _a_ dizisinin öğelerini başa ekleyin. 
10) _a_ dizisinin öğelerini başa ters sırada ekleyin. _(19, 17, 13, 11, 7, 5, 3 ,2)_
11) _a_ dizisinin öğelerini sona ekleyin.
12) _a_ dizisinin öğelerini sona ters sırada ekleyin. _(19, 17, 13, 11, 7, 5, 3 ,2)_
13) _a_ dizisinin ilk ve son öğeleri haricinde tüm öğelerini başa ekleyin.
14) _a_ dizisinin ilk ve son öğeleri haricinde tüm öğelerini sona ekleyin.
15) _a_ dizisinin _ivec_'te bulunmayan öğeleri varsa o öğeleri sondan ekleyin. _(a dizisindeki sırasıyla)_


```
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <iterator>


int main()
{
  int a[] = {2, 3, 5, 7, 11, 13, 17, 19}; 
	using namespace std;
	vector<int> ivec(20);
	srand(static_cast<unsigned>(time(nullptr)));
	generate(ivec.begin(), ivec.end(), [] {return rand() % 20; });
	copy(ivec.begin(), ivec.end(), ostream_iterator<int>{cout, " "});
	//.....
	// kodunuz
	std::cout << "\n\n\n";
	copy(ivec.begin(), ivec.end(), ostream_iterator<int>{cout, " "});
}
```
