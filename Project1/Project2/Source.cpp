#include <iostream>
using namespace std;

int power(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int answer = 1;
	std::cin >> a;
	std::cin >> b;
	while (b >= 0) {
		answer *= a;
		b -= 1;
	}
	std::cout << answer << std::endl;
	return EXIT_SUCCESS;
}