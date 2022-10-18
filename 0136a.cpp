#include <iostream>
#include <vector>
int main()
{
   int n;
   std::cin>>n;
   std::vector <int> a(n);
   std::vector <int> b(n);
   int i;
   for(i=1;i<=n;i++)
    std::cin>>a[i];
   for(i=1;i<=n;i++)
   {
       b[a[i]]=i;
   }
   for(i=1;i<=n;i++)
    std::cout<<b[i]<<" ";
 
}