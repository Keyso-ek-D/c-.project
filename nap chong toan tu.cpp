#include <iostream>
struct Point{
	int x;
	int y;
	friend std::istream& operator>>(std::istream &is, Point &p)
	{
		std::cout<<"x= ";
		is>> p.x;
		std::cout<<"y= ";
		is>>p.y;
		return is; 
	 } 
	friend std::ostream& operator<<(std::ostream &os, Point p){
		os<<p.x<<" "<<p.y;
		return os;
	}
	friend Point operator+(Point p1, Point p2){
		Point p3;
		p3.x=p1.x+p2.x;
		p3.y=p1.y+p2.y;
		return p3;
	}
};
int main(){
	Point p1, p2;
	std::cout<<"Nhap p1= "<<std::endl;
	std::cin>>p1;
	std::cout<<" Nhap p2= "<<std::endl;
	std::cin>>p2;
	Point p3= p1+p2;
	std::cout<<"P1 + P2 = "<<p3;
	return 0;
}
