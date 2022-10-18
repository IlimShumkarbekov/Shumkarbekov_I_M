#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    int test;
    std::cin >> test;
    while (test--) {
        int a;
        int i = 0;
        std::cin >> a;
        std::vector <int> b;
        int  e, d, s, t1, t;
        if (a==10000){
             std::cout<<"1";
             std::cout << "\n";
            std::cout<<"10000";
            std::cout << "\n";
        continue;}
          if (a%1000==0){
             std::cout<<"1";
             std::cout << "\n";
            std::cout<<a;
            std::cout << "\n";
            continue;
        }
        if (a % 1000 != 0) {
            e = a % 10;
            d = a % 100 - e;
            t1 = a / 1000;
            t = t1 * 1000;
            s = a - t1 * 1000 - d - e;
        }
        if (e > 0) {
            b.push_back(e);
        }
        if (d > 0) {
            b.push_back(d);
        }
        if (s > 0) {
            b.push_back(s);
        }
        if (t > 0) {
            b.push_back(t);
        }
        std::cout << b.size() << "\n";
        for (i = b.size() - 1; i > -1; i--) {

            std::cout << b[i] << " ";
        }
        std::cout << "\n";
    }
}