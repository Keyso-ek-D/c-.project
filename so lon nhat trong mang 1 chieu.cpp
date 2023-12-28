#include <iostream>
int main(){
	int numbers[10];
	int n;
	int max=0;
	std::cout<<"n= ";
	std::cin>>n;
	for (int i=0;i<n;i++){
		std::cout<<"numbers["<<i<<"]= ";
		std::cin>>numbers[i];
	}
	for (int i=0;i<n;i++){
		max=numbers[0];
		if(max<numbers[i]){
			max=numbers[i];
		}
		
	}
	std::cout<<"max= "<<max;
	return 0;
}
