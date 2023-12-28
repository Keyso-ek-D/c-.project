#include <iostream>
int main()
{
	int n;
	std::cin>>n;
	bool in= true;
	for (int i=2;i<(n-1);i++){
		if (n%i==0){
			in=false;
			break;
	}
	}
	
	if(in){
		std::cout<<n<<" la so nguyen to";
	}else{
		std::cout<<n<<" khong phai la so nguyen to";
	}
	return 0;
	
}
