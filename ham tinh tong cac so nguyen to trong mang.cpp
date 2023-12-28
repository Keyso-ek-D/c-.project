#include <iostream>
#include<math.h>
 bool is_prime(int n){
 for (int i=2;i<=sqrt(n);i++){
 	if (n%i==0){
	 return false;
	 }
 }return true;	
}
int total_prime( int arr[],int n){
	int sum=0;
	for (int i=0;i<n;i++){
			if (is_prime(arr[i])){
			sum+=arr[i];
			}
		}return sum;
	}
int main(){
	int sum=0;
	int n;
	int arr[10];
	std::cin>>n;
	for (int i=0;i<n;i++){
		std::cin>>arr[i];
	}std::cout<<total_prime(arr,n);
	return 0;
}
