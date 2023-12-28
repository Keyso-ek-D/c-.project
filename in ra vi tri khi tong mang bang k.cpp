#include <iostream>
int main()
{
	int n,k,arr[10];
	std::cout<<"n= ";
	std::cin>>n;
	for (int i=0;i<n;i++){
		std::cout<<"arr["<<i<<"]= ";
		std::cin>>arr[i];
	}
	std::cout<<"k= ";
	std::cin>>k;
	int x=-1,y=-1;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i!=j && arr[i]+arr[j]==k){
				x=i;
				y=j;
				break;
			}
			if(x!=-1 && y!=-1){
			break;
			}
		}
		
	}
	if (x!=-1 &&y!=-1){
			std::cout<<x<<" "<<y;
		}else{
			std::cout<<"khong co";
		}
	return 0;
}
