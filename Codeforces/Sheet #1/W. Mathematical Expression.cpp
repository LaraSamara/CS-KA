#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	char s, q;
	std::cin >> a >> s >> b >> q >> c;
	if (s == '+') {
		if (a + b == c) {
			std::cout << "Yes";
		}
		else {
			std::cout << a + b;
		}
	}
	else if (s == '-') {
		if (a - b == c) {
			std::cout << "Yes";
		}
		else {
			std::cout << a - b;
		}
	}
	else if (s == '*') {
		if (a * b == c) {
			std::cout << "Yes";
		}
		else {
			std::cout << a * b;
		}
	}
	return 0;
}