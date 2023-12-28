#include <iostream>
int luythua(int n){
	if (n==1){
		return 1;
	}else{
		return (n * luythua(n-1));
	}
} 

int main(){
	int n;
	std::cout<<"n= ";
	std::cin>>n;
	std::cout<<" giaithua=  "<<luythua(n);
	return 0;
}
