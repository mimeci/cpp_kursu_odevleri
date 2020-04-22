#### Aşağıdaki main işlevinde belirtilen alana bir kod yazmanız gerekiyor. Yazdığınız kod std::vector\<int\> türünden _ivec_ nesnesinin taşıdığı değerlerden çift olanları _vector_'den silecek tek olanlardan ise _vector_'e bir tane daha ekleyecek.

```
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec{ 2, 5, 4, 3, 7, 8, 1, 6, 12, 21, 87, 10 };

	/*
	    kod
	*/

	for (int i : ivec) {
		cout << i << " ";
	}
	cout << "\n\n";
}

```

#### Yazdığınız kod doğruysa, çalıştırıldığında ekran çıktısı şöyle olmalı:

```
5 5 3 3 7 7 1 1 21 21 87 87
```

__Yazacağınız kod, işlemi doğrudan _ivec_ nesnesi üzerinde tek bir döngü deyimi ile gerçekleştirmeli. Yani ikinci bir kap ya da dizi kullanmayacaksınız. Çok kolay gibi görünen bu soru sizi biraz uğraştırabilir.__
