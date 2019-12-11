#### Aşağıdaki kodlarda (varsa) sentaks hatalarını (gecersiz kodları) saptayın. Her bir sentaks hatasının nedenini açıklayın:

```
void func(int);

class A {
public:
	void func()
	{
		func(1);
		A::func(2);
		func();
		::func(3);
		::func();
	}
};
```

```
class B {
	void func(int);
public:
	void func(double);
	void func(double)const;
	void func(float) = delete;
};

int main()
{
	B bx;

	bx.func(2.3);
	bx.func(10);
	bx.func(1.2f);
}
```


```
class C {
	int mx = 0;
	mutable int my = 10;
public:
	void f();
	void cf()const;

	C *func() const
	{
		mx = 12;
		my = 23;
		f();
		cf();
		return this;
	}
};

void g()
{
	const C cx;
	cx.f();
	cx.cf();
}
```


```
class D {
public:
	void func();
	void foo()
	{
		func();
		foo();
		D::func();
		this->func();
		(*this).func();
		this->D::func();
	}
};

void g(D dx)
{
	dx.func();
	dx.D::func();
}
```


```
class E {
	int x(int) { return 1; }
public:
	void foo();
};

int x = 20;


void E::foo()
{
	if (auto x = ::x + 5; x  > 10)
		x = this->x(x);
	
	++x;
	auto val = x(::x);
	E::x(::x);

}
```


```
class F {
	int mx = 10;
public:
	void func(F& rf)const;
};


F fg;

void F::func(F& rf)const
{
	F local_f;

	fg.mx = 45;
	rf.mx = 55;
	local_f.mx = 65;
	F::mx = 75;
}

```


```
class G {
	void f(int);
	void f(double);

public:
	void f()
	{
		f();
		f(12);
		f(1.2);
		f(2.3f);
		f(4u);
	}
};

void g()
{
	f();
	G::f()
	
}
```
