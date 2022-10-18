#include <iostream>
#include <vector>
int main()
{
int k,u=0,n;
int f1, t1, sum;
std::cin>>n>>k;
for (int i=0; i<n; i++)
{ 
std::cin>>f1;
std::cin>>t1;

if(t1>k) {
	sum=f1-(t1-k);
	}	
	else {
		sum=f1;
		}
	if (i==0){
		u=sum;
		}
		
	if(sum>u)
	{u=sum;
	}
	}

	std::cout<<u;

}