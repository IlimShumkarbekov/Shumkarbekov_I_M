#include <iostream>
#include <vector>

int main()
{
    int n,k, summa,maximum=0;
    std::cin>>n>>k;
    std::vector <int> a(n);
    for (int i=0; i<n; i++){
        std::cin>>a[i];
        }
     for (int i=0; i<n; i++){ 
       if (k%a[i]==0)
       {
           maximum=std::max(maximum, a[i]);
           }
     
     }
     std::cout<<k/maximum;
}