### Aşağıdaki test kodunda belirtilen yere (ayrı ayrı) `ivec` nesnesi üstünde şu işleri gerçekleştirecek kodları yazınız. Gereken yerlerde lamba ifadelerini kullanınız:

1) Sona 127 değerini ekleyin
2) Başa 253 değerini ekleyin.
3) Sondan bir önceki değer olacak şekilde 666 değerini ekleyin.
4) İkinci değer olacak şekilde 444 değerini ekleyin
5) standart giriş akımından 2 tamsayı alın. Örnek 5 ve 9. Başa 5 tane 9 ekleyin.
6) standart giriş akımından 2 tamsayı alın. Örnek 5 ve 9. Sona 5 tane 9 ekleyin.
7) standart giriş akımından 2 tamsayı alın. Örnek 5 ve 9. 9 değeri 5 indeksli öğe olacak şekilde 9 değerini ekleyin.


```
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <iterator>


int main()
{
  int a[] = {23, 
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
