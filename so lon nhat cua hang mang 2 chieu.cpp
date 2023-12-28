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
	
	for (int i=0;i<n;i++){
		int max=arr[i][0];
			for (int j=0;j<m;j++){
				if(max<arr[i][j]){
					max=arr[i][j];
					
				}
			}
			std::cout<<max;
		}
	return 0;
}
