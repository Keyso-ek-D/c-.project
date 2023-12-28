#include <iostream>
#include <math.h> 
void massss(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			std::cout<<n<<" khong phai la so nguyen to"<<std::endl;
			return;
		}
		}std::cout<<n<<" la so nguyen to"<<std::endl;
	}
int main(){
	int x=15;
	int y=20; 
	massss(x);
	massss(y); 
}
