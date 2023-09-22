
#include <iostream>
using namespace std;
#include <cmath>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	double D;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	D = b * b - 4 * a * c;
	if (D > 0) {
		double x1 = 0;
		double x2 = 0;
		x1 = (b * (-1) + sqrt(D)) / 2;
		x2 = (b * (-1) - sqrt(D)) / 2;
		std::cout << x1 << " " << x2 << std::endl;
	}
	if (D == 0) {
		double x;
		x = (b * (-1)) / (2 * a);
		std::cout << x << ' ' << x  << std::endl;
	}
	if (D < 0) {
		std::cout << "No real roots" << std::endl;
	}


	return 0;
}