#include <iostream>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
    long double  n, r;
    //long double p = 22/7;
    std::cin >> n >> r;
    long double R=(r*sin(M_PI/n))/(1-sin(M_PI/n));
    //long double R = (r * sin(p/n)) / (1 - sin(p/n));
    std::cout.precision(10);
    std::cout << R;
    //std::cout << p;
}