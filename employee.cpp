#include <iostream>
#include <string>
using namespace std;
struct date{                                                         //Structure Definition
	int day;
	int month;
	int year;
};
date scan_date(date d){                                             // function to take date input and reture date struct    
	cout<<"Enter month: ";
	cin>>d.month;
	cout<<"Enter day of the month: ";
	cin>>d.day;
	cout<<"Enter year: ";
	cin>>d.year;
	return d;
	
}

void print_date(date d){                                            // function to print date
	cout<<d.day<<"/"<<d.month<<"/"<<d.year<<"\n";
	return ;
	}
struct employee{                                                       // Structure definition
	string name;
	date join;
	string type;
	date relieve;
};

employee input(employee a){                                         // function to take employee details
	cout<<"Enter employee name: ";
	getline(cin,a.name);
	cout<<"Enter date of joining \n";
	a.join=scan_date(a.join);
	cout<<"Enter Type of employee: ";
	cin>>a.type;
	if (a.type=="Temporary"){
		cout<<"Enter date of relieving \n";
		a.relieve=scan_date(a.relieve);
	}
	return a;
	
}
void output(employee a){                                            // function to print employee details
	cout<<"Employee details: \n";
	cout<<"Name: "<<a.name<<endl;
	cout<<"Date of joining: ";
	print_date(a.join);
	cout<<"Type of employee: "<<a.type<<endl;
	if (a.type=="Temporary"){
		cout<<"Date of relieving: ";
		print_date(a.relieve);
	}
}

int main(){
	struct employee e1;
	e1= input(e1);
	output(e1);
	
}