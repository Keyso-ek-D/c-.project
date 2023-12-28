#include <iostream>
int main(){

std::string art;
std::cout<<"mang=";
std::getline(std::cin,art);
int i=0;
while(i <art.length()){
	if (art[i]==' ' && art[i+1]==' '){
		art.erase(i,1);
	}else{
		i++; 
	} 
}
std::cout<<art;
return 0;
}
