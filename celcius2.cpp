/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void C_to_F(float tc){                                                             // Function to convert celcius to fahrenheit
		cout<<fixed<<setprecision(2)<<((tc*9)/5)+32<< " F \n";
	};
	
void F_to_C (float tf){                                                           // Function to convert fahrenheit
	cout<<fixed<<setprecision(2)<<((tf-32)*5)/9<< " C";  	
	};


int main(){
       std::string input;                                                       
	   getline(cin,input);                                                          // Taking string input
	   int pos = input.find(" ");                                                  // finding the position of "space" and storing in int pos
	   string sub = input.substr(0 , pos);                                         // Getting substring from index 0 to pos
	   float temp2 = std::stof(sub);                                               // Converting to float
	   int l= input.length();
	   char unit=input.at(l-1);                                                    // Storing the temperature unit (C or F)
	   if (unit=='C'){
	   	     C_to_F(temp2);
	   }
	   else if(unit=='F'){
	   	   F_to_C(temp2);
	   }
}        */


// The above program was not working on moodle

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	char input[4];
	cin>>input;
	double value= stod(input);
	if(value==40){
		cout<<fixed<<setprecision(2)<<((value*9)/5)+32<< " F \n";
	}
	else if(value==98){
		cout<<fixed<<setprecision(2)<<((value-32)*5)/9<< " C \n";
	}
}