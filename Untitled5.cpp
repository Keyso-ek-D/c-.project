#include <iostream>
int main(){
	int s=0;
	int n;
	std::cin>>n;
	while (n>0){
		s+=n%10;
		n=n/10; 
	} 
	std::cout<<s; 
	return 0; 
} 
