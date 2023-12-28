#include <iostream>
int main(){
int n,x,y;
int numbers[20];
std::cout<<"n=";
std::cin>>n;
for(int i=0;i<n;i++){
	std::cout<<"numbers["<<i<<"]= ";
	std::cin>>numbers[i];
}
std::cout<<"x= ";
std::cin>>x;
std::cout<<"y= ";
std::cin>>y;
for (int i=n;i>x;i--){
	numbers[i]=numbers[i-1];
}
numbers[x]=y;
n++;
for(int i=0;i<n;i++){
	std::cout<<numbers[i];
}
return 0;
}
