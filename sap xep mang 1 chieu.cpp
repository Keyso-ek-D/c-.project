#include <iostream>
int main()
{
	int n=5;
	int numbers[5]={6,9,3,2,5};
	for(int i=0;i<5;i++){
		std::cout<<numbers[i]<<" "<<std::endl; 
	}
	for (int i=n-1;i>0;i--){
		for (int j=0;j<i;j++){
			if (numbers[j]>numbers[j+1]){
				int max=numbers[j];
				numbers[j]=numbers[j+1];
				numbers[j+1]=max;
				
			}
		}
	}
	for (int i=0;i<n;i++){
		std::cout<<numbers[i]<<" ";
	}
	return 0;
}
