#### Aşağıdaki C++ programı hakkında yorum yapınız

+ sentaks hatası var ise, hatayı ve hatanın nedenini belirtiniz.
+ tanımsız davranış var ise nedenini belirtiniz.
+ standart çıkış akımına ne yazdırılacağını belirtiniz.


```
//prog3.cpp

#include <iostream>

int main()
{
	int x = 10;
	int &r1 = x;
	auto r2 = x;
	auto &r3 = r2;

	r2 += 5;
	r3 += 20;
	++x;

	std::cout << r1 + r2 + r3 << "\n";
}
```
