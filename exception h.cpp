#include <iostream>
using namespace std;
int main(){

int arr[5];
for (int i=0;i<5;i++){
	cin>>arr[i];
}
int count=0;
string s="abc";
while(count==0){
int a,b;
try{
	
    cin>>a>>b;
	if(a>4 || b>4 || a<0 || b<0) {
		throw s;
		count=0;
	}
	else if(b==0){
		throw 1.1;
		count =0;
	} 
	else{
		throw "asd";
		count =1;	
	} 

}


catch(double i){
  cout<<"Denominator zero";
}
catch(string s){
	cout<<"Array index out of bounds";
}
catch(const char msg[]){
	cout<<arr[a]/arr[b];
}
}
}
