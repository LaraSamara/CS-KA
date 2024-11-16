#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char s;
	std::cin >> a >> s >> b;
	if (s == '<') {
		if (a < b) {
			std::cout << "Right";
		}
		else {
			std::cout << "Wrong";
		}
	}
	else if (s == '>') {
		if (a > b) {
			std::cout << "Right";
		}
		else {
			std::cout << "Wrong";
		}
	}
	else if (s == '=') {
		if (a == b) {
			std::cout << "Right";
		}
		else {
			std::cout << "Wrong";
		}
	}
	return 0;
}