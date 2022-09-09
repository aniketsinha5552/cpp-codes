#include <iostream>
#include <cmath>
using namespace std;

// point class
class point{
	int x,y;
	public:
		void quad(int arr[5][2]){
			int count1=0;
			int count2=0;
			int count3=0;
			int count4=0;
		for (int i=0;i<5;i++)
		{
		
			int a=arr[i][0];
			int b=arr[i][1];
			if (a>0 && b>0){
				count1++;
			}
			else if (a<0 && b>0){
				count2++;
			}
			else if (a<0 && b<0){
				count3++;
			}
			else {
				count4++;
			}
			
		}
		cout<<"Count of I quadrant points – "<<count1<<endl;
		cout<<"Count of II quadrant points – "<<count2<<endl;
		cout<<"Count of III quadrant points – "<<count3<<endl;
		cout<<"Count of IV quadrant points – "<<count4<<endl;
		}
		};
		
	// city block function
void city_block(int x1,int y1,int x2,int y2){
	int x= pow(x1-x2,2);
	int y= pow(y1-y2,2);
	int dis= sqrt(x+y);
	cout<<"City block distance between ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is "<<dis;
}
	
// main method
int main(){
	int input[5][2];
	for(int i=0;i<5;i++){
		for(int j=0;j<2;j++){
			cin>>input[i][j];
		}
	}

	point p;
	p.quad(input);
	city_block(input[0][0],input[0][1],input[1][0],input[1][1]);
	
}