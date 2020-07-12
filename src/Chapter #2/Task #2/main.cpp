#include <iostream>
#include <iomanip>

using std::setw;

int main() {
	std::cout << setw(4) << 1990 << '\t' << setw(5) << 135 << std::endl
	          << setw(4) << 1991 << '\t' << setw(5) << 7290 << std::endl
	          << setw(4) << 1992 << '\t' << setw(5) << 11300 << std::endl
	          << setw(4) << 1993 << '\t' << setw(5) << 16200 << std::endl;

	return 0;
}
