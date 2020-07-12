#include <iostream>

int main() {
	double gallons = 0;
	std::cin >> gallons;
	std::cout << "Equivalent of " << gallons << " gallons in cubic feet is " << gallons / 7.481;
	return 0;
}