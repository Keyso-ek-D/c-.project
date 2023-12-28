#include <iostream>
int main()
{
	std::string arr;
	std::cout<<"mang=";
	std::getline(std::cin,arr);
	while (arr[0]==' '){
		arr.erase(0,1); 
	}
	while(arr.length()-1==' '){
		arr.erase(arr.length()-1,1);
		}
	int i=0;
		while(i<arr.length()){
			if(arr[i]==' ' && arr[i+1]==' '){
				arr.erase(i,1);
			}else{
				i++;
			}
		}
		for (int i=0;i<arr.length();i++){
			arr[i]=tolower(arr[i]);
		}
		for (int i=0;i<arr.length();i++){
			if (arr[i]==' '&&arr[i+1==' ']){
				arr[i+1]=toupper(arr[i+1]);
			}
		}
		if(arr[0]!=' '){
			arr[0]=toupper(arr[0]);
		}
	std::cout<<arr;
	return 0;
}
