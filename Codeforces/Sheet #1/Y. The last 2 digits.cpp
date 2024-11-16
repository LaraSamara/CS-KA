#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	a = a % 100;
	b = b % 100;
	c = c % 100;
	d = d % 100;
	int res = a * b * c * d;
	res %= 100;
	if (res > 9) {
		std::cout << res;
	}
	else {
		std::cout << '0' << res;
	}
	return 0;
}