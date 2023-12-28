#include <iostream>
int main(){
	int n;
	int *b= new int[n];
	int a[n];
	std::cout<<"n= ";
	std::cin>>n;
	for (int i=0;i<n;i++){
		std::cin>>b[i];
	}
	for (int i=0;i<n;i++){
		std::cout<<b[i]<<" "<<std::endl;
	}
	int x;
	std::cout<<"x= ";
	std::cin>>x;
	for (int i=x;i<n-1;i++){
		b[i]=b[i+1];
	}
	n--;
	for (int i=0;i<n;i++){
		std::cout<<b[i]<<" ";
	}
	return 0;
}
