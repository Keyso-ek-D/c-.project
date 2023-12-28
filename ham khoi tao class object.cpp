#include <iostream>
#include <string> 
using namespace std;
// class, object 
// 1 con nguoi, ten: Nguyen Van A, tuoi:28, dia chi: Ha Noi
class Person{
public://cong khai
	//properties
string name;
int age;
//constructor( ham khoi tao)
person() {
cout<<"Ham khoi tao"<<endl;
}
Person(string _name, int _age, string  _address){
	name=_name;
	age=_age;
	address=_address;
}
string address;
//methods
void work(){
	cout<<name<<" is working..."<<endl;
}
	
};
int main(){
	Person person1("Nguyen Van A",28,"Ha Noi");

	cout<<"Name: "<<person1.name<<endl;
	cout<<"Age: "<<person1.age<<endl;
	cout<<"Address: "<<person1.address<<endl;
	person1.work();
	return 0;
}

