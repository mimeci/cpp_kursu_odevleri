#### Elimizde küçükten büyüğe sıralı bir tamsayı _vector_'ü var. 
Bu vector içinde _[0 – 99]_ aralığında bulunan _n_ tane tamsayı tutuluyor. _n_ değeri  _0_ dahil _100_ dahil herhangi bir tamsayı olabilir. Her tamsayıdan en fazla bir tane bulunacağı garanti altında. Örnek:

```
vector<int> ivec{ 5, 23, 25, 30, 45, 47, 70, 98 };
```

#### Yapmanız gereken bu _vector_'den hareketle bir _string_ oluşturmak. 
Oluşturduğunuz _string_'de bu _vector_'de bulunmayan tamsayılar aşağıdaki notasyon ile gösterilecek:

```
0-4, 6-22, 24, 26-29, 31-44, 46, 48-69, 71-97, 99
```

Birkaç örnek daha

```
{} --> 0-99
{0} --> 1-99
{3, 5} --> 0-2, 4, 6-99
```
Bu _string_i oluşturacak bir işlev yazmalısınız:

```
#include <vector>
#include <string>
 
std::string get_missing_integers(const std::vector<int> &ivec);
```

+ işlevin parametresi tamsayıları tutan _vector_.
+ İşlevin geri dönüş değeri istenen _string_.

**Tanımladığınız işlevi aşağıdaki program ile sınayabilirsiniz:**

```
#include <set>
#include <vector>
#include <ctime>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
 
using namespace std;
 
string get_missing_integers(const vector<int> &ivec);
 
vector<int> getRandomTestVector()
{
	set<int> iset;
	size_t n = rand() % 100;
	while (iset.size() < n) {
		iset.insert(rand() % 100);
	}
	return vector<int>(iset.begin(), iset.end());
}
 
int main()
{
	srand(static_cast<unsigned>(time(nullptr)));
	auto vec = getRandomTestVector();
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << get_missing_integers(vec) << "\n";	
}
```
