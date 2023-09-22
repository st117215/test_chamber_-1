#include <iostream>
using namespace std;

int main()
{
	int t = 0;
	std::cin >> t;
	while (t != 0) {
		int t1 = 0;
		int t2 = 0;
		int summ = 0;
		std::cin >> t1;
		std::cin >> t2;
		summ = t1 + t2;
		std::cout << summ << std::endl;
		t = t - 1;
	}
	

	return EXIT_SUCCESS;
}

