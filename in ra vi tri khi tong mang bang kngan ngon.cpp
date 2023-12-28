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
	//for (int i=0;i<n;i++){
	//	for (int j=0;j<n;j++){
	//		if (i!=j && arr[i]+arr[j]==k){
	//			std::cout<<i<<" "<<j;
	//		return ;	
	//		}else{
	//			std::cout<<"no no";
	//		}
	//	}
	//}
	for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]+arr[j]==k)
        {
            std::cout<<"ket qua: "<<i<<" "<<j;
            
        }
        break;
    }
} 
	return 0;
}
