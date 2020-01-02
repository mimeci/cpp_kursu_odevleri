#### Aşağıdaki C++ programı hakkında yorum yapınız

+ sentaks hatası var ise, hatayı ve hatanın nedenini belirtiniz.
+ tanımsız davranış var ise nedenini belirtiniz.
+ standart çıkış akımına ne yazdırılacağını belirtiniz.

```
//prog1.cpp
#include <iostream>

int &func(int x)
{
	return x;
}

int main()
{
	int y = 20;
	func(y) = 50;
	std::cout << "y = " << y << "\n";
}
```
