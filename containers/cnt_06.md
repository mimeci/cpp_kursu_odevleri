#### Elinizde tamsayı tutan bir *vector* nesnesi var. Yapmanız gereken bu vector‘de yinelenen tüm tamsayıları *vector*‘den silmek. Yazdığınız kodun çalıştırılmasından sonra *vector*‘de her tamsayıdan birer tane kalmış olacak ve tamsayıların silme işleminden önceki sırası korunacak:

```
#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
	vector<int> ivec{ 36, 85, 36, 17, 24, 85, 17, 48, 48, 24, 24, 9, 53, 9, 85, 
		             17, 53,  9, 53, 17, 48, 9, 9, 24, 36, 53, 85, 48 };
 
	/* 
		kod   
	*/
	for (int i : ivec)
		cout << i << " ";
 
	cout << endl;
	//	
}
```

#### Yukarıdaki program çalıştırıldığında ekran çıktısı aşağıdaki gibi olmalı:

```
36 85 17 24 48 9 53
```
