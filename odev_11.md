#### Aşağıdaki kodlardan herbiri için yapılan işlev çağrılarının durumunu belirtin. Geçerli mi değil mi? Geçerli ise çağrılan işlev hangisidir?

```
void func(int);  	//1
void func(double); 	//2
void func(long);  	//3
void func(bool); 	//4

void foo()
{
	int x = 10;

	func('A');
	func(2.3F);
	func(4u);
	func(10 > 5);
	func(&x);
	func(nullptr);
}
```

```
void func(void *);  //1
void func(bool); //2

void foo()
{
	double x = 1.0;

	func(0);
	func(nullptr);
	func(&x);
	func(x);
}
```


```
void func(char *p);  //1
void func(const char *p); //2

void foo()
{
	char str[] = "Herb Sutter";
	const char cstr[] = "Stephan Lavavej";
	char *const p1 = str;
	const char *p2 = str;
	func(nullptr);
	func("Bjarne Stroustrup");
	func(str);
	func(cstr);
	func(p1);
	func(p2);
}
```

```
enum Color {Blue, Green, Red};

void func(Color);
void func(unsigned int);

void foo()
{
	func(12);
}
```

```
void func(int &);
void func(int &&);
void func(const int &);

int f1();
int& f2();

void foo()
{
	int x = 10;
	const int cx = 20;

	func(x);
	func(cx);
	func(x + 5);
	func(f1());
	func(f2());
}
```
