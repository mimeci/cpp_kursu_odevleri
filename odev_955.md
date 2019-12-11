#### Aşağıdaki *main* işlevinde belirtilen alana bir kod yazmanız gerekiyor. Yazdığınız kod *std::list<int>* türünden *ilist* nesnesinin taşıdığı değerlerden çift olanları listeden silecek tek olanlardan ise listeye bir tane daha ekleyecek.

```
#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> ilist{ 2, 5, 4, 3, 7, 8, 1, 6, 12, 21, 87, 10 };

	/*
	    kod
	*/

	for (int i : ilist) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}

```

#### Yazdığınız kod doğruysa, çalıştırıldığında ekran çıktısı şöyle olmalı:

```
5 5 3 3 7 7 1 1 21 21 87 87
```

#### Yazacağınız kod, işlemi doğrudan ilist nesnesi üzerinde tek bir döngü deyimi ile gerçekleştirmeli. Yani ikinci bir kap ya da dizi kullanmayacaksınız. Çok kolay gibi görünen bu soru sizi biraz uğraştırabilir.
