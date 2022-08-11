#include <iostream>
using namespace std;
class atm{
	int amt;
	float balance;
	float balance2;
	public:
	atm(float a,float b){
		amt=a;
		balance=b;
	}
	void display(){
		if(amt%5==0 && balance>=amt){
			cout<<"balance: "<<balance-amt-0.5<<endl;
		}
		else{
			cout<<"balance: "<<balance;
		}
	}

	 
};

int main(){
	int amount;
	float bal;
	cout<<"Enter withdrawal amount and balance \n";
	cin>>amount;
	cin>>bal;
	atm a1(amount,bal);
	a1.display();
	
}