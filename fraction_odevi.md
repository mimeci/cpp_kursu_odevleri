```
#include <string>
#include <iosfwd>

class Fraction {
public:
	constexpr explicit Fraction(int num = 0, int denum = 1);
	constexpr explicit Fraction(double dval);
	explicit Fraction(const std::string &s);
	
	constexpr int Num()const;
	constexpr int Denom()const;
	Fraction& operator+=(const Fraction& f);
	Fraction& operator-=(const Fraction& f);
	Fraction& operator*=(const Fraction& f);
	Fraction& operator/=(const Fraction& f);
	Fraction& operator++();
	Fraction operator++(int);
	Fraction& operator--();
	Fraction operator--(int);
	operator bool()const;
	std::string to_string()const;
	static Fraction Random();
};

constexpr Fraction operator+(const Fraction& f1, const Fraction &f2);
constexpr Fraction operator-(const Fraction& f1, const Fraction &f2);
constexpr Fraction operator*(const Fraction& f1, const Fraction &f2);
constexpr Fraction operator/(const Fraction& f1, const Fraction &f2);

bool operator==(const Fraction& f1, const Fraction& f2);
bool operator!=(const Fraction& f1, const Fraction& f2);
bool operator<(const Fraction& f1, const Fraction& f2);
bool operator<=(const Fraction& f1, const Fraction& f2);
bool operator>(const Fraction& f1, const Fraction& f2);
bool operator>=(const Fraction& f1, const Fraction& f2);

std::ostream &operator<<(std::ostream&, const Fraction &);
std::istream &operator>>(std::istream&, Fraction &);
```
