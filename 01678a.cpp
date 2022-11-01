#include <iostream>
#include <vector>
int main()
{
    int test;
    std::cin>>test;
   while(test--){
int n,sum=0,  zero=0;
std::cin>>n;
std::vector<int>posl(n);
std::vector<int>b;
for (int i=0; i<n; i++){
    std::cin>>posl[i];
    if (posl[i]==0){
        zero++;
        }
    }    
    if (zero!=0){   
        sum=n-zero;
        }
        else {
    for (int i=1; i<n; i++){
    if (posl[i]==posl[i-1] ){
        sum=n;
        break;
        }
        else {
            sum=n+1;
            }
    }
    }  
 
 
 
std::cout<<sum;
std::cout << "\n";
}
}
