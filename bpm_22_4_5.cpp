#include <iostream>
#include <vector>
#include <algorithm>
int main (){
	int n;
	std::cin >> n;
	std::vector <int> a(n); // реверснутый массив
	std::vector <int> b(n); // изначальный массив
	std::vector <int> sum(3*n); // изнач + реверс
	for (int i = 0; i<n; i++)
	{
		std::cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		b[i]=a[i];
		sum[i] = b[i];
	}
	std::reverse(std::begin(a), std::end(a));
	for (int i = 0; i <n; i++) {
		sum.push_back(a[i]);
	}
	
	for (int i = 0; i < n; i++) {
		std::cout << b[i]<<" ";
	}
	for (int i = 0; i < n; i++) {
		std::cout << a[i] << " ";
	}
	for (int i = 0; i < n; i++) {
		std::cout << sum[i] << " ";
	}
}
