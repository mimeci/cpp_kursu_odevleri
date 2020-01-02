#include <iostream>
#include <limits>

int main() 
{
	auto a = std::numeric_limits<unsigned int>::max();
	decltype(a) b = 0;
	std::cout << (--b == a);
	std::cout << ++a;
}
