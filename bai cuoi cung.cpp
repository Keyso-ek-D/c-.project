#include <iostream>
#include <vector>
using namespace std;

class Account {
	private:
		string name;
		int balance;
	public:
		Account(string name, int balance) : name(name), balance(balance) {}
		friend class Bank;
};

class Bank{
	private:
		vector<Account> accounts;
	public:
		void add_account(string name, int balance){
			Account new_account(name, balance);
			this->accounts.push_back(new_account);
		}
		void get_account(string name){
			int index=-1;
			for (int i=0;i<this->accounts.size();i++){
				if (name == this->accounts[i].name){
					index=i;
					break;
				}
			}
			if (index!=-1) {
				cout<<"Name: "<<this->accounts[index].name;
				cout<<", balance: "<<this->accounts[index].balance<<endl;
			} else {
				cout<<"Not found"<<endl;
			}
		}
};

int main(){
	Bank bank;
	bank.add_account("Long",2000);
	bank.add_account("Duy",3000);
	bank.add_account("Tuan",4000);
	bank.get_account("Tuan");
	return 0;
}
