#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void input_integer(string laber, int &n);
bool is_prime(int n); 
int sum_of_primes(int n);

int main(){
	int n;
	input_integer("n= ",n);
	cout<<" ket qua :"<< sum_of_primes(n); 
	
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
int sum_of_primes(int n)
{
	int result=0;
	for (int i=2;i<=n;i++){
		if (is_prime(i)){
			result+=i;
			
		}
	} return result;
}
