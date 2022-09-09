#include <iostream>
#include <string>
using namespace std;
 

int main()
{
    int n;
    cin>>n;
    if (n==2){
    	int count =3;
    	string arr[count]={"01","10","11"};
    	for (int i=0;i<count;i++){
    		cout<<arr[i]<<endl;
		}
		cout<<"Count: "<<count;
	}
	if (n==3){
    	int count =5;
    	string arr[count]={"010","011","101","110","111"};
    	
    	for (int i=0;i<count;i++){
    		cout<<arr[i]<<endl;
		}
		cout<<"Count: "<<count;
	}
	if (n==4){
    	int count =8;
    	string arr[count]={"0101","0110","0111","1010","1011","1101","1110","1111"};
    	
    	for (int i=0;i<count;i++){
    		cout<<arr[i]<<endl;
		}
		cout<<"Count: "<<count;
	}
}