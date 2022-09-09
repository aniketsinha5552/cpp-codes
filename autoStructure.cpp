#include <iostream>
#include <string.h>
using namespace std;

struct date_t{                                        //Definition of date_t struct 
		int month;
		int day;
		int year;
	};
	
struct tank_t{                                      //Definition of tank_t struct
		int capacity;
		int curr_fuel;
	};
struct auto_t{                                     // Definition of aut_t struct
		string make;
		string model;
		int odom;
		date_t manufacture;
		date_t purchase;
		tank_t gas;
		
	};
	
	date_t scan_date(date_t d){                       // Function to take date input and return a date_t data type
		cout<<"Enter month: "<<"\n";
		cin>>d.month;
		cout<<"Enter day of the month: "<<"\n";
		cin>>d.day;
		cout<<"Enter year: "<<"\n";
		cin>>d.year;
		return d;
	
	}
	void print_date(date_t d){                         // Function to print date
		cout<<d.day<<"/"<<d.month<<"/"<<d.year<<"\n";
		return ;
	}
	tank_t scan_tank(tank_t t){                                            // Function to take tank details input and return tank_t data type
		cout<<"Enter tank capacity in gallons: "<<"\n";
		cin>>t.capacity;
		cout<<"Enter current fuel level in gallons: "<<"\n";
		cin>>t.curr_fuel;
		return t;
	}
	void print_tank(tank_t t){                                                          //Funtion to print tank details
		cout<<"Tank capacity : "<<t.capacity<<" gallons \n"<<"Current fuel: "<<t.curr_fuel<<" gallons \n";
		return ;
	}
	auto_t scan_auto(auto_t a){                                       //Function to take component details and return auto_t data type
		cout<<"Enter Make: "<<"\n";
		getline(cin,a.make);
		cout<<"Enter Model "<<"\n";
		getline(cin,a.model);
		cout<<"Odometer reading: "<<"\n";
		cin>>a.odom;
		cout<<"Enter Manufacture date"<<"\n";
		a.manufacture= scan_date(a.manufacture);
		cout<<"Enter purchase date"<<"\n";
		a.purchase=scan_date(a.purchase);
		a.gas=scan_tank(a.gas);
		return a;
	}
	void print_auto(auto_t a){                                  //Function to print component details
	    cout<<"Automotive Details: \n";
		cout<<"Make: "<<a.make<<"\n";
		cout<<"Model: "<<a.model<<"\n";
		cout<<"Odometer reading: "<<a.odom<<"\n";
		cout<<"Manufacture date: ";
		print_date(a.manufacture);
		cout<<"Purchase date: ";
		print_date(a.purchase);
		print_tank(a.gas);
	}
int main(){                                                  //Main method
	struct auto_t s1;
	s1=scan_auto(s1);
	print_auto(s1);
}
	

