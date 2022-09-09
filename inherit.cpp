#include <iostream>
using namespace std; 
class Employee{
	// employee name, number and designation
	public:
	string employee_name;
	int employee_no;
	string desig;
	Employee(string name,int num,string des){
		employee_name= name;
		employee_no= num;
		desig= des;
	}
};
class Temporary_Employee: public Employee{
	//consolidated monthly pay
	public:
		
	int con_pay;
	int sal;
	Temporary_Employee(string name,int num,string des,int cp) :Employee(name,num,des){
		con_pay=cp;
	}
		void salary(){
			sal=con_pay;
		}
		
		void display_t(){
			cout<<"Name: "<<employee_name<<endl;
			cout<<"Number: "<<employee_no<<endl;
			cout<<"Designation: "<<desig<<endl;
			cout<<"Monthly Salary: "<<sal<<endl;
		}
};
class Permanent_Employee: public Employee{
	//Basic Pay, HRA, DA and PF
	public:
	int BP;
	int HRA;
	int DA;
	int PF;
	int sal;
		Permanent_Employee(string name,int num,string des,int bp,int hra,int da,int pf):Employee(name,num,des){
			BP=bp;
			HRA=hra;
			DA=da;
			PF=pf;
		}
		void salary(){
			sal=HRA+BP+DA-PF;
		}
		void display_p(){
			cout<<"Name: "<<employee_name<<endl;
			cout<<"Number: "<<employee_no<<endl;
			cout<<"Designation: "<<desig<<endl;
			cout<<"Monthly Salary: "<<sal<<endl;
		}
};
int main(){
	string name,desig;
	int num,hra,bp,da,pf,cp;
	cin>>name>>desig;
	cin>>num>>hra>>bp>>da>>pf>>cp;
	//Employee o1(name,num,desig);
	Permanent_Employee ob2(name,num,desig,bp,hra,da,pf);
	Temporary_Employee ob3(name,num,desig,cp);
	ob2.display_p();
	ob3.display_t();
	return 0;
}