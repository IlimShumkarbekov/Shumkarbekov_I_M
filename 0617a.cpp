#include <iostream>



int main() {
	int w;
	std::cin >> w;
	int a = w / 5;
	if (w % 5 == 0) {
		std::cout << a;
	}
	else {
		std::cout << a + 1;
	}
}