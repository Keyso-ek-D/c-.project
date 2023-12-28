#include <iostream>
int main(){
	std::string art;
	std::cout<<"mang=";
	std::getline(std::cin,art);
	for (int i=0;i<art.length();i++){
		art[i]=tolower(art[i]);
	}
	for (int i=0;i<art.length();i++){
		if(art[i]==' ' && art[i+1]!=' '){
			art[i+1]=toupper(art[i+1]);
		}
	}
	if (art[0]!=' '){
		art[0]=toupper(art[0]);}
	std::cout<<art;
	return 0;
}
