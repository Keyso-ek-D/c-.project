#include <iostream>
float keyso(int arr[], int n,int max){
    max=arr[0];
    for (int i=0;i<n;i++){
        if (max < arr[i]){
            max=arr[i];
        }
    } return max;
}int main(){
    int max;
    int arr[100];
    int n;
    std::cin>>n;
    for (int i=0;i<n;i++){
        std::cin>>arr[i];
    } std::cout<<keyso(arr,n,max);
    return 0;
}
