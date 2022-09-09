#include <iostream>
using namespace std;
int main(){
	float income,amt,tax;
	int dependent;
	cin>>income; //Income input
	cin>>dependent; //No of dependent
	int dep_red= dependent*2000; // reduction due to dependents
	amt= income-(10000+ dep_red); //reduced amont
	tax = 0.2*amt; // tax on the reduced amount
	cout<< tax;
}