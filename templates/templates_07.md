### C++11 öncesi araçları kullanarak Fibonacci serisinin n. teriminin derleme zamanında hesaplanmasını sağlayacak aşağıdaki meta fonksiyonu yazınız:

```
template <unsigned int n>
struct Fibonacci {
	static unsigned const value = expr;
};
```

```
int main()
{
	int a[Fibonacci<11>::value] = { 0 };
	//...
}
```

#### Yukarıdaki *main* işlevinde *a* dizisinin boyutu *Fibonacci* serisinin *11.* terimi olan *89* olmalı.
Daha sonra, yine *Fibonacci* serisinin *n.* teriminin derleme zamanında hesaplanmasını sağlayacak bir *constexpr* işlevi özyinelemeli *(recursive)* olarak gerçekleştirin:

```
constexpr unsigned int fibonacci(unsigned int);
```

#### Son olarak, C++14 standartlarıyla olanakları genişletilen *constexpr* işlev yapısını kullanarak aynı işlevi özyinelemeli olmayan *(iterative)* biçimde gerçekleştirin.
