#### Değişken sayıda argüman ile çağrılabilecek ve kendisine gönderilen argümanları tek bir *std::string*'e dönüştürerek geri döndürecek *tostring* isimli *variadic* işlev şablonunun kodunu yazınız:

```
#include <string>
 
template<typename ...Ts>
std::string tostring(const Ts & ...args);
```

#### Yazacağınız işlev şablonunu aşağıdaki test kodu ile sınayınız:

```
#include <bitset>
#include <string>
#include <iostream>
 
using namespace std;
 
int main()
{
	string s{ "kaan" };
	bitset<8> bs{175u};
	cout << tostring(12, "ali", 2.3, s, bs) << "\n";
}

```

#### Örnek ekran çıktısı şöyle olmalı:

```
12ali2.3kaan10101111
```
