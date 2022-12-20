#include <iostream>
#include <vector>
#include <math.h>
	int main()
	{
		int n = 0; m = 0;
		double x, y;
			std::vector <double> a;
			for (int i = 0; i < n; i++) {
				std::cin >> a[i];
			}
			for (int i = 0; i < n; i++) {
				
				if (a[i] <= sqrt(2)) {
					n = n++;
				}
				else {
					m = m++; 
				} 
			}
			std::cout << n / m;

	}