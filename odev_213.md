#### Bu soruda bir yazıda tekrar eden karakterleri silerek, yazıda yalnızca bunlardan ilkini bırakmanız isteniyor.

```
#include <string>
 
std::string &remove_duplicates(std::string &);
```

#### İşlev üstünde silme yaptığı **std::string** nesnesini döndürüyor. Aşağıdaki test koduna bakınız:

```
#include <string>
#include <iostream>
 
std::string& remove_duplicates(std::string &);
 
int main()
{
	std::string s1{ "alpkan altinyar" };
	std::string s2{ "ankara antalya adiyaman artvin" };
 
	std::cout << "(" << remove_duplicates(s1) << ")\n"; //(alpkn tiyr)
	std::cout << "(" << remove_duplicates(s2) << ")\n"; //(ankr tlydimv)
 
}

```
