#include <iostream>
int main()
{
	int n,x;
	std::cout<<"n= ";
	std::cin>>n;
	int numbers[20];
	for (int i=0;i<n;i++){
	std::cout<<"numbers["<<i<<"]= ";
	std::cin>>numbers[i];
}
std::cout<<"x= ";
std::cin>>x;
for (int i=x;i<n-1;i++){
	numbers[i]=numbers[i+1];
}
n--;
for (int i=0;i<n;i++){
	std::cout<<numbers[i];
}
return 0;
}
