#include <iostream>
int main(){
int n;
char arr[10];
std::cin>>n;
for (int i=0;i<n;i++){
    std::cin>>arr[i];
}
for (int i=n-1;i>0;i--){
    for (int j=0;j<i;j++){
        if (arr[j]>arr[j+1]){
            int m=arr[j];
            arr[j]=arr[j+1];

            arr[j+1]=m;
        }
    }
}
for (int i=0;i<n;i++){
    std::cout<<arr[i]<<" ";
}
return 0;
}
