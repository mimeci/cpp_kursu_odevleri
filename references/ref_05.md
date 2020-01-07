#include<iostream>

void func(int& ra, const int& rb) 
{
	std::cout << rb;
	ra = 1;
	std::cout << rb;
}

int main() 
{
	int ival = 0;

	func(ival, ival);
}
