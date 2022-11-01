#include <iostream>
#include <vector>
int main()
{
  int test;
  std::cin>>test;
  while(test--){
    int n, sum=0;
    std::cin>>n;
    std::vector <int>a(n);
    for (int i=0; i<n; i++){
        std::cin>>a[i];
    }
    for (int i=1; i<n; i++)
    if (a[i]+a[i-1]==1 or a[i]+a[i-1]==0){
    sum=sum+1;
    }
    else {
        sum=sum;
    }
    
   std::cout<<sum;
   std::cout<<"\n";
}
}
