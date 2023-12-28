#include <iostream>
int main()
{
	int m,n;
	int arr1[10][10];
	int arr2[10][10];
	std::cout<<"n= ";
	std::cin>>n;
	std::cout<<"m=";
	std::cin>>m;
	std::cout<<"ma tran 1"<<std::endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			std::cout<<"arr1["<<i<<"]["<<j<<"]= ";
			std::cin>>arr1[i][j];
		}
	}
	std::cout<<"ma tran 2"<<std::endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			std::cout<<"arr2["<<i<<"]["<<j<<"]= ";
			std::cin>>arr2[i][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			std::cout<<arr1[i][j]+arr2[i][j]<<" ";
		}
		std::cout<<std::endl;
	}

	return 0;
}
