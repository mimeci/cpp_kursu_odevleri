#### Şablon tür parametresi *(T)* olan türün *Nec* isimli bir içsel türe *(nested type)* sahip olup olmadığını sorgulayacak *hasTypeNec* isimli sınıf şablonunu kodlayınız:

```
template <typename T>
struct hasTypeNec {
	//...
	static constexpr bool value = expr;
};
```

#### Sınıfın *constexpr* olan *boo*l türden *value* isimli öğesi, eğer şablon tür parametresi olan *T* türü *Nec* isimli bir içsel türe sahip ise *true* aksi halde *false* değere sahip olmalı. Yazdığınız sınıf şablonunu aşağıdaki test kodu ile sınayınız:

```
struct A {
	typedef int Nec;
};
 
struct B {};
 
#include <iostream>
 
int main()
{
	constexpr bool b1 = hasTypeNec<A>::value;
	constexpr bool b2 = hasTypeNec<B>::value;
	constexpr bool b3 = hasTypeNec<int>::value;
 
	std::cout << b1 << b2 << b3; //100
}

```
