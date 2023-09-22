#include <iostream>
using namespace std;

int main()
{
	int t = 0;
	std::cin >> t;
	while (t != 0) {
		int k = 0;
		int a = 0;
		int b = 2;
		std::cin >> a;
		while (b <= a) {
			b *= 2;
			k += 1;
		}
		std::cout << k << std::endl;
		k = 0;
		b = 2;
		t -= 1;
	}
	return EXIT_SUCCESS;
}

