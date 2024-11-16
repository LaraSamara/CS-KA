#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double number;
	std::cin >> number;
	if (ceil(number) == floor(number)) {
		std::cout << "int " << (int)number;
	}
	else {
		std::cout << "float " << (int)number <<" "<< number - (int)number;
	}
	return 0;
}