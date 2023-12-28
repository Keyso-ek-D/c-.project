#include <iostream>
int main()
{
	std::string art;
	std::cout<<"mang=";
	std::getline(std::cin,art);
	while(art[0]==' '){
		art.erase(0,1);
	}
	while(art[art.length()-1]==' '){
		art.erase(art.length()-1,1);
	}
	std::cout<<"mang="<<art;
	return 0;
}
