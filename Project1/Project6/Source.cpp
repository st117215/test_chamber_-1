#include <iostream>
using namespace std;

int main()
{
    char c = ' ';
    std::cin >> c;
    int f = 0;
    while (cin.get(c)) {
        if (c != ' ') {
            std::cout << c << std::endl;
            f = 0;
        }
        else if ((f == 0) and (c == ' ')) {
            std::cout << c << std::endl;
            f = 1;
        }
        else if ((f == 1) and (c == ' ')) {
            f = 1;
        }
    }

    return 0;
}