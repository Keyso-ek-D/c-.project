#include <iostream>
struct Circle{
	float r;
	friend std::istream& operator>>(std::istream &is, Circle &circle){
		std::cout<<" nhap ban kinh: ";
		is>>circle.r;
		return is;
	}   
	float chu_vi(){
		return r*2*3.14;
	}
	float dien_tich(){
		return r*r*3.14;
	}
}; 
int main(){
	Circle circle;
	std::cin>>circle;
	std::cout<<"chu vi= "<<circle.chu_vi()<<std::endl;
	std::cout<<"dien tich= "<<circle.dien_tich()<<std::endl;
	return 0; 
} 
