+ **Elimizde bir tamsayı _vector_'ü var. Bu _vector_'den hareketle aynı öğe sayısına sahip bir başka tamsayı _vector_'ü oluşturmamız gerekiyor.**
#### Oluşturacağımız _vector_'un her bir öğesi kaynak _vector_'de tutulan o indisli öğenin sağında bulunan kendisinden daha büyük öğelerin _(surpasser)_ sayısı olacak. Biraz karışık mı geldi? Bir örnekle açıklayalım:

#### kaynak vector’ümüzde tutulan değerler:

```
34, 185, 56, 17, 8, 3, 98, 21, 10, 4, 77, 124
```

olsun. Oluşturacağımız *vector'de* şu değerler tutuluyor olmalı:

```
5, 0, 3, 4, 5, 6, 1, 2, 2, 2, 1, 0
```

Bu işi gerçekleştiren *getSurpasserVec* isimli işlevi tanımlayınız:

```
#include <vector>
 
std::vector<int> getSurpasserVec(const std::vector<int> &vec);
```

+ İşlevin parametresi kaynak _vector_
+ İşlevin geri dönüş değeri istenen _vecto
