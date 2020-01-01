#### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?


```
#include <iostream>
 
using namespace std;
 
class Base
{
public:
	Base()
	{
		cout << "Base default ctor\n";;
	}
	
	Base(const Base &)
	{
		cout << "Base copy ctor\n";
	}
};
 
class DerA : virtual Base
{
public:
	DerA()
	{ 
		cout << "DerA default ctor.\n";
	}
	
	DerA(const DerA &)
	{
		cout << "DerA copy ctor.\n";
	}
};
 
class DerB : virtual Base
{
public:
	DerB()
	{
		cout << "DerB default ctor.\n";
	}
	
	DerB(const DerB &)
	{
		cout << "DerB copy ctor.\n";
	}
};
 
class MulDer :DerA, DerB
{
public:
	MulDer() {
		cout << "MulDer default ctor.\n";
	}
	
	MulDer(const MulDer &)
	{
		cout << "Mulder copy ctor.\n";
	}
};
 
int main()
{
	MulDer d1;
	MulDer d2(d1);
}

```

__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*
