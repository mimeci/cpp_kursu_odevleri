### Aşağıdaki test kodunda belirtilen yere (ayrı ayrı) `ivec` nesnesi üstünde şu işleri gerçekleştirecek kodları yazınız. Gereken yerlerde lamba ifadelerini kullanınız:

1) Sona 127 değerini ekleyin
2) Başa 253 değerini ekleyin.
3) Sondan bir önceki değer olacak şekilde 666 değerini ekleyin.
4) İkinci değer olacak şekilde 444 değerini ekleyin
5) standart giriş akımından 2 tamsayı alın. Örnek 5 ve 9. Başa 5 tane 9 ekleyin.
6) standart giriş akımından 2 tamsayı alın. Örnek 5 ve 9. Sona 5 tane 9 ekleyin.
7) standart giriş akımından 2 tamsayı alın. Örnek 5 ve 9. 9 değeri 5 indeksli öğe olacak şekilde 9 değerini ekleyin.
8) Her öğeden onun yanına bir tane daha ekleyin. Bu işlemden sonra `ivec`'in boyutu 2 katına çıkmalı
9) a dizisinin öğelerini başa ekleyin. 
10) a dizisinin öğelerini başa ters sırada ekleyin. (19, 17, 13, 11, 7, 5, 3 ,2)
11) a dizisinin öğelerini sona ekleyin.
12) a dizisinin öğelerini sona ters sırada ekleyin. (19, 17, 13, 11, 7, 5, 3 ,2)
13) a dizisinin ilk ve son öğeleri haricinde tüm öğelerini başa ekleyin.
14) a dizisinin ilk ve son öğeleri haricinde tüm öğelerini sona ekleyin.
15) a dizisinin ivec'te bulunmayan öğeleri varsa o öğeleri sondan ekleyin. (a dizisindeki sırasıyla)


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
