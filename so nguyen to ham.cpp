#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void input_integer(string laber, int &n);
bool is_prime(int n); 


int main(){
	int n;
	input_integer("n= ",n);
	if (is_prime(n)){
		cout<<n<<" la so nguyen to";
		
	}else{
		cout<<n<<" khong phai la so nguyen to";
	}
	
	return 0;
}
void input_integer(string laber, int &n){
	cout<<laber;
	cin>>n;
}
bool is_prime(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			return false;
		}
	}return true;
} 

