#include <iostream>
float keyso( int arr[10][10], int n, int m){
    int sum=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            sum+=arr[i][j];
        }
    }return sum;
}
int main(){
	int n,m;
    std::cin>>n;	
    std::cin>>m;
    int arr[10][10];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            std::cin>>arr[i][j];
        }
    } std::cout<<keyso(arr,n,m);
    return 0;
}

