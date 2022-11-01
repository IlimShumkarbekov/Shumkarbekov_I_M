#include <iostream>
int main (){
int test;
std::cin>>test;
while (test--){
int a,b,c,d;
std::cin>>a>>b>>c>>d;
if (a+b+c+d<4 and a+b+c+d!=0){
	std::cout<<"1";
	std::cout<<"\n";
	}
else if (a+b+c+d==0){
	std::cout<<"0";
		std::cout<<"\n";
	}
else {
	std::cout<<"2";
		std::cout<<"\n";
	}	
}
}
