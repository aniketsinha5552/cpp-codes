#include <iostream>
using namespace std;
class Time{
	int hour;
	int min;
	int sec;
	public:
	void setTime(int x,int y,int z)                                 // To set the values after checking the conditions
	{
		if(x>0 && x<24 && y>0 && y<60 && z>0 && z<60 )
		{
			hour=x;
			min=y;
			sec=z;
		}
		else{
			cout<<"Invalid input \n";
			
		}
	}
	void display(){                                               // To display the time in the given format
		cout<<"Time is \n";
		cout<<hour<<" : "<<min<<" : "<<sec<<"\n";
	}
};
int main(){
	int h,m,s;
	Time t;                                          // object creation
	cout<<"Enter hours,minutes,seconds \n";            
	cin>>h>>m>>s;                                   // Input
	t.setTime(h,m,s);
	t.display();
}