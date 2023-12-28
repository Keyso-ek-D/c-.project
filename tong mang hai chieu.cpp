#include <iostream>
int main()
{
	int n,m;
	
	int arr[10][10];
	std::cout<<"n= ";
	std::cin>>n;
	std::cout<<"m= ";
	std::cin>>m;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			std::cout<<"arr["<<i<<"]["<<j<<"]= ";
			std::cin>>arr[i][j];
		}
	}
	int s=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			s+=arr[i][j];
		}	
		
	}
	std::cout<<"s= "<<s;
	return 0;
}
