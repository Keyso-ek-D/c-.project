#include <iostream>
struct Circle {
	float r;
	Circle(float _r){
	r=_r;	
	}
	friend bool operator>(Circle c1, Circle c2){
		return c1.r >c2.r;
	}
};
int main(){
	Circle c1(2), c2(3);
	std::cout<<(c1>c2);
	
	return 0;
}
