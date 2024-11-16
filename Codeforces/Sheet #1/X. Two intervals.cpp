#include <iostream>
using namespace std;
int main()
{
	int l1, r1, l2, r2;
	std::cin >> l1 >> r1 >> l2 >> r2;
	if (l2 >= l1 && l2 <= r1) {
		std::cout << l2 << " " << min(r1, r2);
	}
	else if (l1 >= l2 && l1 <= r2) {
		std::cout << l1<<" " << min(r1, r2);
	}
	else {
		std::cout << "-1";
	}
	return 0;
}