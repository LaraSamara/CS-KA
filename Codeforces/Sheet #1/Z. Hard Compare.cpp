#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	long long a, b, c, d;
	std::cin >> a >> b >> c >> d;
	if (b*log(a) > d * log(c)) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
	return 0;
}
