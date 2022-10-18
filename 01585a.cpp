#include <iostream>
#include <vector>
int main()
{
    int test;
    std::cin >> test;
    while (test--) {
        int n;
        std::cin >> n;
        std::vector <int> a(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        int p, sum;
        
        p=a[0];
        sum=1;
        for (int i = 1; i < n; i++) {
            if (i > 0 and a[i] + a[i - 1] == 0) {
                sum = -1;
                break;
            }
            if (a[i] == 1) {
                sum = sum + 1;
            }
            if (i > 0 and a[i] == 1 and a[i - 1] == 1) {
                sum = sum + 4;
            }
        }
        if (sum==-1){
            std::cout <<"-1";
            std::cout << "\n";
        }
        else {
            std::cout << sum+p;
        
            std::cout << "\n";
        }
        
    }
}