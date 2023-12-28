#include <iostream>
int main(){
int n;
int a[n];
int *b= new int[n];
std::cout<<"n= ";
std::cin>>n;
for (int i=0;i<n;i++){
	std::cin>>b[i];
}for (int i=0;i<n;i++){
	std::cout<<b[i]<<" ";
}
int *new_arr= new int[n+1];
for (int i=0;i<n;i++){
	new_arr[i]=b[i];
}
int x;
std::cout<<"x= "<<std::endl;
std::cin>>x;
new_arr[n]=x;
delete [] b;
b=new_arr;
for (int i=0;i<n+1;i++){
	std::cout<<b[i]<<" ";
}
	return 0;
}
