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
	int sum=0; 
	for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				if(i==0 || j==0 ||  i==n-1 || j==m-1){
					sum+=arr[i][j]; 
				} 
					
					
				}
			
				}
				std::cout<<sum;
	return 0;
}
