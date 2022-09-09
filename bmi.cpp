#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float weight, height;
	cin>>weight>>height;
	float bmi= weight/(height*height);
	cout<<fixed<<setprecision(2)<<bmi<<endl;
	if (bmi<18.5){
		cout<<"Underweight";
	}
	else if(bmi>=18.5 && bmi<=24.9){
		cout<<"Normal weight"<<endl;
	}
	else if(bmi>=18.5 && bmi<=24.9){
		cout<<"Normal weight"<<endl;
	}
	else if(bmi>=25 && bmi<=29.9){
		cout<<"Pre-obesity"<<endl;
	}
	else if(bmi>=30 && bmi<=34.9){
		cout<<"Obesity class I"<<endl;
	}
	else if(bmi>=35 && bmi<=39.9){
		cout<<"Obesity class II"<<endl;
	}
	else if(bmi>40){
		cout<<"Obesity class III"<<endl;
	}
}